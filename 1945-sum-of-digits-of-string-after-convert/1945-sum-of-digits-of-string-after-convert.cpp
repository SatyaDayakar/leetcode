class Solution {
public:
    int getLucky(string st, int k) {

         long long num = 0 ;
        int p = 1 ;
        for(int i = st.size()-1 ; i>=0 ;--i)
        {
            long long s = st[i] -'a'+1 ;
            num+=(s%10);
            if(s/10 != 0)
            {
                s/=10 ;
                num+=(s%10);
            }
        }
         if(num == 0)
         return 0 ;
         --k ;
        while(k>0)
        {
            int sum = 0 ;
            while(num>0)
            {
                sum+=(num%10);
                num/=10;
            }
            num = sum ;
            --k ;
        }
        int ans = num ;
        return ans ;
        
    }
};