class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        vector<int>ans(2 , -1);
        int i = 0;

        for( ; i<nums.size();i++)
        {
            if(nums[i] == 1)
            ans[0] = i ;
            if(nums[i] == 2)
            ans[1]= i ;
            if(ans[0]!= -1 && ans[1]!=-1)
            {
                i++ ;
                break ;
            }
        }
        if(ans[0]== -1 || ans[1]==-1)
        return -1 ;
        int diff = abs(ans[1]-ans[0]);
        
        for(;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                diff = min (diff , abs(i-ans[1]));
                ans[0]=i ;
            }
            if(nums[i]==2)
            {
                diff = min (diff , abs(i-ans[0]));
                ans[1]=i ;
            }
        }
        return diff ;

        
    }
};