class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        unordered_map<int,int> mp ;
        int mf = 0 ;
        int count = 0 ;
        for(int x:nums)
        {
            mp[x]++ ;
            mf = max(mf , mp[x]);
        }
         for(int x:nums)
        {
            if(mp[x] == mf )
            count++;
        }
        return count ;
        
    }
};