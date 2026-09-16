class Solution {
public:
    long long modpow(long long a, long long b) {
        long long ans = 1;
        while (b > 0) {
            if (b & 1)
                ans = ans * a % 1000000007;
            a = a * a % 1000000007;
            b /= 2;
        }
        return ans;
    }

    int numberOfSets(int n, int k) {
        const long long MOD = 1000000007;

        int N = n + k - 1;
        int R = 2 * k;

        if (R > N)
            return 0;

        long long num = 1;
        long long den = 1;

        for (int i = 1; i <= R; i++) {
            num = num * (N - R + i) % MOD;
            den = den * i % MOD;
        }

        return num * modpow(den, MOD - 2) % MOD;
    }
};