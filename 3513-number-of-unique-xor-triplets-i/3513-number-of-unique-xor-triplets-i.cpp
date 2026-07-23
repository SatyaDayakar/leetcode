class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {

        if(nums.size()<3)
        return nums.size();
        else 
        {
            int ans = 1 ;
            while(ans<=nums.size())
            {
                ans = ans<<1 ;
            }

        return ans ;
        }
        
    }
};