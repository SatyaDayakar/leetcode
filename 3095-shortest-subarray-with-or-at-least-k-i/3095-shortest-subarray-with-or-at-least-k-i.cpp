class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int ans = INT_MAX ;
        
        for(int i = 0 ; i<nums.size() ; i++)
        {
            int s = nums[i] ;
            if(s>=k)
            return 1 ;
            for(int j = i+1 ; j<nums.size();j++)
            {
               s|=nums[j];
               if(s>=k)
               {
               ans = min(ans , j-i+1);
               break ;
               }

            }
        }
        if(ans == INT_MAX)
        ans = -1 ;
        return ans ;
    }
};