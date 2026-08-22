class Solution {
public:
    bool checkDivisibility(int n) {

        int dsum = 0 ;
        int dprod = 1 ;
        int temp = n ;
        while(temp>0)
        {
            dsum+=(temp%10);
            dprod*=(temp%10);
            temp/=10;
        }
        if(n%(dsum+dprod) == 0 )
        return true ;
        else
        return false ;
        
    }
};