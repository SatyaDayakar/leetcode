class Solution {
public:
    int arraySign(vector<int>& nums) {

        int nc = 0 ;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(nums[i]== 0)
            return 0 ;
            else if(nums[i]<0)
            nc++ ;
        }
        if(nc%2 == 0)
        return 1 ;
        return -1 ;
        
    }
};