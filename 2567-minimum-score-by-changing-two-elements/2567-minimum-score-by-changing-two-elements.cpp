class Solution {
public:
    int minimizeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int ans1 = nums[nums.size()-1]-nums[2];
        int ans2 = nums[nums.size()-3]-nums[0];
        int ans3 = nums[nums.size()-2]-nums[1];
        return min( min(ans1 , ans2),ans3) ;
        
        
    }
};