class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans ; 
        if(nums.size()<2)
        {
            ans.push_back(nums[0]);
            return ans ;
        }
        int c1 = nums[0];
        int c2 = nums[1];
        int cc1 = 0 , cc2 = 0 ;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(nums[i] == c1)
            cc1++ ;
            else if(nums[i] == c2)
            cc2++ ;
            else if(cc1 == 0)
            {
                c1 = nums[i];
                cc1 = 1 ;
            }
            else if(cc2 == 0)
            {
                c2 = nums[i];
                cc2 = 1 ;
            }
            else
            {
                cc1-- ;
                cc2-- ;
            }
             
        }
        cc1 = 0 ;
        cc2 = 0 ;
        for(int i = 0 ; i<nums.size() ; i++)
        {
          if(nums[i]== c1)
          cc1++ ;
          else if(nums[i] == c2)
          cc2++ ;
        }

        if(cc1 > (nums.size()/3))
        ans.push_back(c1);
        if(cc2 > (nums.size()/3))
        ans.push_back(c2);

        return ans ;

        
    }
};