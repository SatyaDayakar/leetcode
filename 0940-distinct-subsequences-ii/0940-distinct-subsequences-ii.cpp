class Solution {
public:
    int distinctSubseqII(string s) {
        const long long MOD = 1e9 + 7;

        int n = s.size();

        // dp[i] = number of distinct subsequences
        // including empty subsequence using first i characters
        vector<long long> dp(n + 1);

        dp[0] = 1;

        // last[ch] = position of previous occurrence of ch
        vector<int> last(26, -1);

        for (int i = 1; i <= n; i++) {
            int ch = s[i - 1] - 'a';

            dp[i] = (2 * dp[i - 1]) % MOD;

            if (last[ch] != -1) {
                dp[i] = (dp[i] - dp[last[ch] - 1] + MOD) % MOD;
            }

            last[ch] = i;
        }

        // Remove empty subsequence
        return (dp[n] - 1 + MOD) % MOD;
    }
};