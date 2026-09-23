class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {

        if(nums.size()== 1 || nums.size()==2)
        return nums ;

        vector<int>left(nums.size() , 0 ) ;
        vector<int>right(nums.size(), 0 );
        int m = nums[0] ;
        for(int i = 1 ; i<nums.size();i++)
        {
           if(nums[i]>m)
           {
           m = nums[i];
           left[i]=m ;
           }
        }
          m = nums[nums.size()-1] ;
        for(int i = nums.size()-2 ; i>=0 ;i--)
        {
           if(nums[i]>m)
           {
           m = nums[i];
           right[i]=m ;
           }
        }
        vector<int>ans ;
        ans.push_back(nums[0]);
        for(int i = 1 ; i<nums.size()-1;i++)
        {
            if(nums[i]==left[i] || nums[i]==right[i])
            ans.push_back(nums[i]);
        }
        ans.push_back(nums[nums.size()-1]);
        return ans ;
        
    }
};