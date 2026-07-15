class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        int ans = 1 ;
        long long wsum = nums[0] ;
        for(int l = 0 , r =  1 ; r<nums.size() ; r++)
        {
           wsum+=nums[r];
           long long  req = 1LL*nums[r]*(r-l+1) - wsum ;
           while( l<=r && req > k)
           {
            wsum-=nums[l] ;
            l++ ;
            req = 1LL*nums[r]*(r-l+1) - wsum ;
           }
           ans = max(ans , r-l+1);

        }
        return ans ;
    }
};