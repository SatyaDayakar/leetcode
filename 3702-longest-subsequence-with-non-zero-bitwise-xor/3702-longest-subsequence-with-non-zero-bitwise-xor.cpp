class Solution {
public:
    int longestSubsequence(vector<int>& nums) {

        int result = 0 ;
        int c = 0 ;
        for( int i=0 ; i<nums.size();i++)
        {
            if(nums[i] != 0)
             c = 1 ;
            result^=nums[i];
        }
        if(c == 0)
        return 0 ;
        if(result == 0)
        return nums.size()-1 ;
        else
        return nums.size();
    }
};