class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int max_diff = -1;
        int mi = nums[0];
        for(int i = 1;i<nums.size();i++){
            if(mi<nums[i]){
                int diff = nums[i]-mi;
                max_diff = max(max_diff,diff);
            }
            mi = min(mi,nums[i]);
        }
        return max_diff;
    }
};