class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        vector<int>left(nums.size() , 0 ) ;
        vector<int>right(nums.size(), 0 );
        int m = nums[0] ;
        for(int i = 0  ; i<nums.size();i++)
        {
           m = max(nums[i],m);
           left[i]=m ;
        }

         m = nums[nums.size()-1] ;
        for(int i = nums.size()-1 ; i>=0 ;i--)
        {
           m = min (nums[i],m);
           right[i]=m ;
        }
        int ans = -1 ;
        for(int i=0 ;i<nums.size();i++)
        {
           if(left[i]-right[i] <= k)
           {
            ans = i ;
            break ;
           }
        }
        return ans ;
        
    }
};