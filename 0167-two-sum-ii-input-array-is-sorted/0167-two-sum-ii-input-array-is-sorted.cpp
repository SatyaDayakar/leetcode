class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> ans ;

        for(int i = 0 , j = nums.size()-1 ; i<j  ; )
        {
            int sum = nums[i]+nums[j];
            if(sum == target)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans ;
            }
            else if(sum<target)
            {
                while( i<j && nums[i] == nums[i+1] )
                i++ ;
                i++ ;
            }
            else
            {
                while( i<j && nums[j] == nums[j-1] )
                j--;
                j-- ;
            }

        }

        return ans ;
        
    }
};