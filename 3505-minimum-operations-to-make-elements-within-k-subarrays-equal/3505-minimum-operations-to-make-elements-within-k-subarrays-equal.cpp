
class Solution {
public:

    void balance(multiset<int>& left, multiset<int>& right,
                 long long& leftSum, long long& rightSum, int target)
    {
        while(left.size() > target)
        {
            int val = *left.rbegin();

            left.erase(left.find(val));
            leftSum -= val;

            right.insert(val);
            rightSum += val;
        }

        while(left.size() < target)
        {
            int val = *right.begin();

            right.erase(right.find(val));
            rightSum -= val;

            left.insert(val);
            leftSum += val;
        }
    }

    void add(int num, multiset<int>& left, multiset<int>& right,
             long long& leftSum, long long& rightSum, int target)
    {
        if(left.empty() || num <= *left.rbegin())
        {
            left.insert(num);
            leftSum += num;
        }
        else
        {
            right.insert(num);
            rightSum += num;
        }

        balance(left, right, leftSum, rightSum, target);
    }

    void remove(int num, multiset<int>& left, multiset<int>& right,
                long long& leftSum, long long& rightSum, int target)
    {
        multiset<int>::iterator it = left.find(num);

        if(it != left.end())
        {
            left.erase(it);
            leftSum -= num;
        }
        else
        {
            it = right.find(num);
            right.erase(it);
            rightSum -= num;
        }

        balance(left, right, leftSum, rightSum, target);
    }

    vector<long long> getCosts(vector<int>& nums, int x)
    {
        multiset<int> left, right;

        long long leftSum = 0;
        long long rightSum = 0;

        vector<long long> costs;

        for(int i = 0; i < nums.size(); i++)
        {
            int currentSize = min(i + 1, x);
            int target = (currentSize + 1) / 2;

            add(nums[i], left, right, leftSum, rightSum, target);

            if(i >= x)
            {
                remove(nums[i-x], left, right,
                       leftSum, rightSum, target);
            }

            if(i >= x-1)
            {
                long long median = *left.rbegin();

                long long cost =
                    median * left.size() - leftSum +
                    rightSum - median * right.size();

                costs.push_back(cost);
            }
        }

        return costs;
    }

    long long minOperations(vector<int>& nums, int x, int k)
    {
        int n = nums.size();

        vector<long long> costs = getCosts(nums, x);

        long long INF = LLONG_MAX / 2;

        vector<vector<long long>> dp(
            n + 1, vector<long long>(k + 1, INF)
        );

        for(int i = 0; i <= n; i++)
        {
            dp[i][0] = 0;
        }

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= k; j++)
            {
                dp[i][j] = dp[i-1][j];

                if(i >= x && dp[i-x][j-1] != INF)
                {
                    dp[i][j] = min(
                        dp[i][j],
                        dp[i-x][j-1] + costs[i-x]
                    );
                }
            }
        }

        return dp[n][k];
    }
};
