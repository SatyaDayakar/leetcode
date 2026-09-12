class Solution {
public:
    vector<int> maximumWeight(vector<vector<int>>& intervals) {
        int n = intervals.size();

        // {left, right, weight, original_index}
        vector<array<long long, 4>> a;
        for (int i = 0; i < n; ++i) {
            a.push_back({
                intervals[i][0],
                intervals[i][1],
                intervals[i][2],
                i
            });
        }

        // Sort by right endpoint.
        sort(a.begin(), a.end(), [](const auto& x, const auto& y) {
            if (x[1] != y[1]) return x[1] < y[1];
            return x[3] < y[3];
        });

        // dp[i][k] = best answer using first i intervals
        // and choosing at most k intervals.
        struct State {
            long long score = 0;
            vector<int> ids;
        };

        auto better = [](const State& x, const State& y) {
            if (x.score != y.score)
                return x.score > y.score;
            return x.ids < y.ids; // lexicographically smaller
        };

        vector<array<State, 5>> dp(n + 1);

        // Right endpoints for binary search.
        vector<long long> rights(n);
        for (int i = 0; i < n; ++i)
            rights[i] = a[i][1];

        for (int i = 1; i <= n; ++i) {
            long long L = a[i - 1][0];

            // Number of earlier intervals whose right endpoint < L.
            // lower_bound finds first right >= L.
            int p = lower_bound(
                rights.begin(),
                rights.begin() + (i - 1),
                L
            ) - rights.begin();

            for (int k = 1; k <= 4; ++k) {
                // Option 1: don't take interval i-1.
                dp[i][k] = dp[i - 1][k];

                // Option 2: take interval i-1.
                State take = dp[p][k - 1];
                take.score += a[i - 1][2];
                take.ids.push_back((int)a[i - 1][3]);

                // The output indices must be in increasing order
                // for the lexicographically smallest representation.
                sort(take.ids.begin(), take.ids.end());

                if (better(take, dp[i][k]))
                    dp[i][k] = move(take);
            }
        }

        return dp[n][4].ids;
    }
};