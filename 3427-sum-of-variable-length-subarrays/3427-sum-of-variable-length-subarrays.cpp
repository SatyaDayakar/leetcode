class Solution {
public:
    int subarraySum(vector<int>& nums) {

        vector<int> pref(nums.size()+1 , 0 );
        for(int i = 0 ; i<nums.size();i++)
        {
            pref[i+1]=pref[i]+nums[i];
        }
        int ans = 0 ; 
        for(int i = 0 ; i<nums.size();i++)
        {
            int s = max(0 , i-nums[i]);
            ans+=(pref[i+1]-pref[s]);
        }
        return ans ;
        
    }
};