class Solution {
public:
    int maxOperations(vector<int>& nums) {

        int sum = nums[0]+nums[1];
        int ans = 0 ;
        for(int i = 0 ; i<nums.size();i+=2)
        {
            if(i+1 == nums.size() || nums[i]+nums[i+1] != sum)
            break ;
            else
            ans++ ;
        }
        return ans ;
        
    }
};