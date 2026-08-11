class Solution {
public:
    int missingInteger(vector<int>& nums) {
        
        int p = nums[0];
        int i = 1 ;
        vector<int>chk(2501 , 0);
        while(i<nums.size() && nums[i] == nums[i-1]+1)
        {
             p+=nums[i]; 
             i++ ;
        }
        while(i<nums.size())
        {
            if(nums[i]>=p)
            chk[nums[i]] = 1 ;   
            i++ ;
        }
        if(p == nums[0])
        chk[p]=1 ;
        for(int j = p ; j<chk.size();j++)
        {
            if(chk[j] == 0)
            {
                i = j ;
                break ;
            }
        }
        return i ;
           
        
    }
};