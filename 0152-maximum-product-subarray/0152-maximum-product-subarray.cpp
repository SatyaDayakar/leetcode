class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int maxp = nums[0];
        int minp = nums[0];
        int ans = nums[0] ;
        for(int i = 1  ; i<nums.size();i++)
        {
            int tmaxp = maxp ;
            int tminp = minp ;
            maxp = max(nums[i],max(nums[i]*tmaxp , nums[i]*tminp));
            minp = min(nums[i], min(nums[i]*tmaxp , nums[i]*tminp));
            ans = max(ans , maxp);
        }
        return ans ;
    }
};