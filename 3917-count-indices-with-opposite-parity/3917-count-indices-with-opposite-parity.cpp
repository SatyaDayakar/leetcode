class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {

        int oc = 0 , ec = 0 ;
        vector<int>ans ;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(nums[i]%2 == 0)
            ec++ ;
            else
            oc++ ;
        }
        for(int i = 0 ; i<nums.size();i++)
        {
            if(nums[i]%2 == 0)
            {
                ans.push_back(oc) ;
                ec-- ;
            }
            else
            {
                ans.push_back(ec);
                oc-- ;
            }

            if(oc < 0)
            oc = 0 ;
            if(ec < 0)
            ec = 0 ;
        }

        return ans ;
        
    }
};