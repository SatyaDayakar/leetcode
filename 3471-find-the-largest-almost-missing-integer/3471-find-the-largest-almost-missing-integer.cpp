class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        if( k == nums.size())
        return *max_element(nums.begin(),nums.end());


       unordered_map<int , int> mp ;
       int n = nums.size()-1 ;

       for(int x : nums)
       {
        mp[x]++ ;
       }

       int ans = -1 ;
       for(int x : nums)
       {
        if(mp[x]==1)
        ans = max(ans , x);
       }
       if(k == 1)
       return ans ;


       if(mp[nums[0]] == 1 && mp[nums[n]]==1)
       return max(nums[0],nums[n]);
       if(mp[nums[0]] == 1)
       return nums[0];
       if(mp[nums[n]]==1)
       return nums[n];
       return -1 ;

        
        
    }
};