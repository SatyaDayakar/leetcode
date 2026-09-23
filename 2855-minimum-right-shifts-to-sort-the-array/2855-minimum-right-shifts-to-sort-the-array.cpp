class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {

        int c = 0 ;
        int pos = nums.size() ;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(nums[i]>nums[(i+1)%nums.size()])
            {
                c++ ;
                pos = i+1 ;
            }
        }
        if(c<2)
        return nums.size()-pos ;
        return -1 ;
        
    }
};