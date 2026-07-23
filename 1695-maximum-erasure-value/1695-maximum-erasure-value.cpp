class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {

        unordered_map<int , int> mp ;
        int sum = 0 ;
        int ans  = 0 ;
        for(int l = 0 , i = 0  ; i<nums.size(); i++)
        {
            if(mp[nums[i]] == 0 )
            {
                sum+=nums[i];
                mp[nums[i]] = i+1 ;
            }
            else
            {
                ans = max(ans , sum);
                while(l<mp[nums[i]])
                {
                    sum-=nums[l];
                    l++ ;
                }
                mp[nums[i]] = i+1 ;
                sum+=nums[i];
            }
        }
      
        ans = max(sum , ans) ;
        return ans ;
        
    }
};