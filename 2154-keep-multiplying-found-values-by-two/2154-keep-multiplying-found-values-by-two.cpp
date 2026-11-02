class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {

        vector<int>freq(1001,0);
        for(int i = 0 ; i<nums.size();i++)
        {
            freq[nums[i]]++ ;
        }
        while(original <= 1000 &&freq[original]>0)
        {
            original*=2 ;
        }
        return original ;
        
    }
};