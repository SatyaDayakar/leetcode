class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        long long ans = 0 ;

        for(int i = 0 ; i<nums.size();i++)
        {
            nums[i] = abs(nums[i]);
        }

       sort(nums.begin(),nums.end());

       for(int i = 0 , j = nums.size()-1; i<=j ; i++ , --j)
       {
        long long l = nums[i]*nums[i] ;
        long long r = nums[j]*nums[j];
        if(i==j)
        ans+=l ;
        else
        ans+=(r-l);
       }

       return ans ;


        
    }
};