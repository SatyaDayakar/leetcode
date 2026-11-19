class Solution {
public:
    int integerReplacement(int s) {

        int ans = 0 ;
        long long n = s;
        while(n!=1)
        {
            if(n%2 == 0)
            {
                n/=2 ;
            }
            else
            {
                if(n%4 == 1 || n ==3)
                n-=1 ;
                else
                n+=1 ;
            }
            ans++ ;
        }

        return ans ;
        
    }
};