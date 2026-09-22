class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        unordered_map<int , int>mp ;
        int sum = 0 ;
        int avg ;
        for(int i = 0 ; i<nums.size();i++)
        {
            sum+=nums[i];
            mp[nums[i]]++ ;
        }
        if(sum <0)
         avg = 0 ;
         else 
         avg = ceil(sum/nums.size());

            avg++ ;
            while(mp[avg]!=0)
            avg++ ;
        return avg ;

        
    }
};