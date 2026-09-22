class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int , int> mp ;
        int sum = 0 ;
        for(int i =  0 ; i<nums.size();i++)
        {
            mp[nums[i]]++ ;
        }
        for(int i =  0 ; i<nums.size();i++)
        {
            if( mp[nums[i]]%k == 0 )
            sum+=nums[i] ;
        }
        return sum ;


        
    }
};