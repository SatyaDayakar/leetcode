class Solution {
public:

    long long countv(long long x, vector<int>& coins)
    {
        int n = coins.size();
        long long count = 0;

        for(int mask = 1; mask < (1 << n); mask++)
        {
            int selected = 0;
            long long clcm = 1;

            for(int i = 0; i < n; i++)
            {
                if(mask & (1 << i))
                {
                    selected++;
                    clcm = lcm(clcm, (long long)coins[i]);
                }
            }

            if(selected % 2 == 0)
                count -= x / clcm;
            else
                count += x / clcm;
        }

        return count;
    }

    long long findKthSmallest(vector<int>& coins, int k)
    {
        long long low = 1;

        long long high =
            1LL * (*min_element(coins.begin(), coins.end())) * k;

        while(low < high)
        {
            long long mid = low + (high - low) / 2;

            if(countv(mid, coins) >= k)
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};