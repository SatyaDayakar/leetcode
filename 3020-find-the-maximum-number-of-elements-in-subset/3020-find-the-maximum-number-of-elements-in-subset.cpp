class Solution {
public:
    int maximumLength(vector<int>& nums) {

        unordered_map<int, int> mp;
        int ans = 1, ssc = 0;

        for (int x : nums)
            mp[x]++;

        if (mp.count(1)) {
            if (mp[1] % 2 == 0)
                ans = max(ans, mp[1] - 1);
            else
                ans = max(ans, mp[1]);
        }

        int mx = *max_element(nums.begin(), nums.end());

        set<int> s(nums.begin(), nums.end());

        for (auto it = s.begin(); it != s.end(); it++) {

            if (*it == 1)
                continue;

            if (mp[*it] >= 2) {

                long long target = 1LL * (*it) * (*it);
                ssc = 2;

                while (target <= mx && mp.count(target)) {

                    if (mp[target] == 1) {
                        ssc++;
                        break;
                    } else {
                        ssc += 2;
                    }

                    target *= target;
                }

                if (ssc == 2)
                    ssc = 0;
                else if (ssc % 2 == 0)
                    ssc--;

                ans = max(ans, ssc);
            }

            ssc = 0;
        }

        return ans;
    }
};