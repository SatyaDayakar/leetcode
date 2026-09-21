class Solution {
public:
    int minimumOperations(vector<int>& nums) {

  
       int ans = 0 ;
       for(int j = 0 ; j<nums.size();j++)
            {
                if(nums[j]%3 != 0)
                ans++ ;
            }
            return ans ;
        
   
        
    }
};