class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {

        if(cost1 > total && cost2 > total)
        return 1 ;
        int maxc = max(cost1 , cost2);
        int minc = min(cost1 , cost2);
        long long ans = 0 ;
        for(int i = 0 ; maxc*i <=total ; i++)
        {
            long long remaining = total-(maxc*i);
            if(remaining != 0)
            ans+=(remaining/minc)+1 ;
            else
            ans+=1 ;
        }
        return ans ;

    }
};