class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s = 0 , d = 0 ;

        for(int x : nums)
        {
            if(x/10 > 0 )
            d+=x ;
            else
            s+=x ;
        }
        if(s == d)
        return false ;
        return true ;
    }
};