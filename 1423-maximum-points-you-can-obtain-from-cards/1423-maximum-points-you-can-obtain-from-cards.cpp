class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        long long sum = 0;

        for (int i = 0; i < cp.size(); i++) {
            sum += cp[i];
        }

        int n = cp.size();

        if (n - k == 0)
            return sum;

        long long wsum = 0;
        for (int i = 0; i < n - k; i++) {
            wsum += cp[i];
        }

        long long mini = wsum;

        for (int i = n - k; i < n; i++) {
            wsum += cp[i];
            wsum -= cp[i - (n - k)];
            mini = min(mini, wsum);
        }

        return sum - mini;
    }
};