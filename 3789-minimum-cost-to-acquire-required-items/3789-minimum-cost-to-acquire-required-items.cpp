class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

        long long a1 = 1LL*cost1*need1 + 1LL*cost2*need2;

        long long a2 = 1LL*costBoth*max(need1, need2);

        long long a3 = 0;

        if(need1 < need2)
        {
            int diff = need2-need1;
            a3 = 1LL*min(costBoth, cost1+cost2)*need1;
            a3 += 1LL*diff*cost2;
        }
        else
        {
            int diff = need1-need2;
            a3 = 1LL*min(costBoth, cost1+cost2)*need2;
            a3 += 1LL*diff*cost1;
        }

        return min(a1, min(a2, a3));
    }
};