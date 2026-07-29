class Solution {
public:
    using ll = long long;

    const ll LIMIT = 1000000;

    ll combination(int n, int r) {
        if (r > n)
            return 0;

        r = min(r, n - r);

        ll ans = 1;

        for (int i = 1; i <= r; i++) {
            ans = ans * (n - r + i) / i;

            if (ans > LIMIT)
                return LIMIT;
        }

        return ans;
    }

    ll countPermutations(vector<int>& half) {
        int total = 0;

        for (int x : half)
            total += x;

        ll ways = 1;
        int remaining = total;

        for (int i = 0; i < 26; i++) {
            if (half[i] == 0)
                continue;

            ways *= combination(remaining, half[i]);

            if (ways > LIMIT)
                ways = LIMIT;

            remaining -= half[i];
        }

        return ways;
    }

    string smallestPalindrome(string s, int k) {

        vector<int> freq(26, 0);

        for (char ch : s)
            freq[ch - 'a']++;

        vector<int> half(26, 0);
        char middle = 0;

        for (int i = 0; i < 26; i++) {
            half[i] = freq[i] / 2;

            if (freq[i] % 2)
                middle = char('a' + i);
        }

        if (countPermutations(half) < k)
            return "";

        string left = "";
        int halfLength = s.size() / 2;

        for (int pos = 0; pos < halfLength; pos++) {

            for (int ch = 0; ch < 26; ch++) {

                if (half[ch] == 0)
                    continue;

                half[ch]--;

                ll ways = countPermutations(half);

                if (ways >= k) {
                    left += char('a' + ch);
                    break;
                }

                k -= ways;
                half[ch]++;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        if (middle)
            return left + middle + right;

        return left + right;
    }
};