class Solution {
public:
    int absDifference(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());
        int lsum = 0 ;
        int rsum = 0 ;
        for(int i = 0 ,j = nums.size()-1 ; i<k ; i++ , --j)
        {
            lsum+=nums[i];
            rsum+=nums[j];
        }
        return rsum-lsum ;
        
    }
};