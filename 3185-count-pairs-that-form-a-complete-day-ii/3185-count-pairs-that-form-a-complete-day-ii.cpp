class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        vector<long long> cnt(24, 0);
        long long ans = 0;

        for (int hour : hours) {
            int r = hour % 24;
            int need = (24 - r) % 24;

            ans += cnt[need];
            cnt[r]++;
        }

        return ans;
    }
};