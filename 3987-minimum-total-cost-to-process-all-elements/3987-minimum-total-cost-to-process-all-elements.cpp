class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {

        long long  s = k ;
        long long  c = 0 ;
        const long long mod = 1000000007;
        long long ans = 0 ;
        for(int i = 0 ; i<nums.size();i++)
            {
               if(nums[i]<=s)
                s-=nums[i];
                else
               {
                   long long z = (nums[i] - s + k - 1) / k;
                   s+=z*k ;
                   c+=z ;
                   s-=nums[i];
               }
            }
        long long a = c;
        long long b = c + 1;
        if (a % 2 == 0)
            a /= 2;
        else
            b /= 2;
        ans = (a % mod) * (b % mod) % mod;
        return ans ;
        
        
    }
};