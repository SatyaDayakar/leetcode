class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        unordered_map <int  , int> mp ;
        int maxi = INT_MIN ;
        int mini = INT_MAX ;
        vector<int> ans ;
        for(int i = 0 ; i<nums.size();i++)
        {
            mp[nums[i]]++ ;
            maxi = max(maxi , nums[i]);
            mini = min(mini , nums[i]);
        }
        for(int i = mini ; i<=maxi ; i++)
        {
            if(mp[i] == 0)
            ans.push_back(i);

        }
        return ans ;
    }
};