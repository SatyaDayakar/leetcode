class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {

        

        sort(nums.begin(),nums.end());
        vector<int> sum ;
        if(nums.size()==1)
        return nums ;
        for(int i = nums.size()-1 ; i>=1 && k>=1 ; --i)
        {
            sum.push_back(nums[i]);
            while(i>=1 && nums[i]==nums[i-1])
            --i ;
            --k ;
        }
        if(k>=1 && nums[0]!=nums[1])
        sum.push_back(nums[0]);
        return sum ;

    }
};