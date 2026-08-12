class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {

        unordered_map<int,int> mp ;
        int l = 0 ;
        int ans = 1 ;
        int i = 0 ;
        for(; i<nums.size();i++)
        {
            mp[nums[i]]++ ;
            if(mp[nums[i]]>k)
            {
                ans = max(ans , i-l);
                while(nums[l] != nums[i])
                {
                    mp[nums[l]]-- ;
                    l++ ;
                }
                mp[nums[l]]-- ;
                l++ ;
            }
        }
        ans = max(ans , i-l);
        return ans ;
        
    }
};