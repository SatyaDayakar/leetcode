class Solution {
public:
    long long sumAndMultiply(int n) {

        long long num = 0 ;
        long long  sum = 0 ;
        long long  p = 1 ;
        while(n>0)
        {
            int digit = n%10 ;
            if(digit !=0)
            {
               sum+=digit ;
               num+=(p*digit);
               p*=10 ;
            }
            n/=10 ;
        }

        long long ans = sum*num ;
        return ans ;
        
    }
};