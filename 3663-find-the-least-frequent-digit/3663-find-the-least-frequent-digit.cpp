class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int> f(10, 0);
        while(n>0)
        {
            int d = n%10 ;
            f[d]++ ;
            n/=10 ;
        }
        int mini = INT_MAX ;
        int ans = 0 ;
        for(int i = 0 ; i<f.size();i++)
        {
            if( f[i]!=0 && f[i]<mini )
            {
                mini = f[i];
                ans = i ;
            }
        }
        return ans ;
        
    }
};