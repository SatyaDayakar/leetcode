class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int c1 = 1 ;
        int c2 = 1 ;
        int c = 1 ;

        for(int i = 1 ; i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            c++ ;
            else
            {
            c1 = max(c1 , c);
            c = 1 ;
            }
        }

         c1 = max(c1 , c);
        c = 1 ;
        for(int i = 1 ; i<nums.size();i++)
        {
            if(nums[i]<nums[i-1])
            c++ ;
            else
            {
            c2 = max(c2 , c);
            c = 1 ;
            }
        }
         c2 = max(c2 , c);
        return max(c1 , c2);
        
    }
};