class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n1 = 0 , n2 = 0 ;
        for(int i = 0 ; i<nums.size() ; i++)
        {
            if(i%2 == 0)
            n1+=nums[i];
            else
            n2+=nums[i];
        }
        return n1-n2 ;
        
    }
};