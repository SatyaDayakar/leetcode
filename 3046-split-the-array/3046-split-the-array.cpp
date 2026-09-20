class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {

        unordered_map<int , int> mp ;
        for(int x :nums)
        {
            mp[x]++ ;
        }
        for(int x :nums)
        {
             if(mp[x]>2)
             return false ;
        }
        return true  ;
        
    }
};