class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int , int> mp1 ;
        unordered_map<int , int> mp2 ;
        vector<vector<int>> ans(2) ;
        for(int x:nums1)
        {
            mp1[x]++ ;
        }
        for(int x:nums2)
        {
            mp2[x]++ ;
        }
        for(int x:nums1)
        {
            if(mp2[x] == 0 && mp1[x]>0)
            {
              ans[0].push_back(x);
              mp1[x] = -1 ;
            }
        }
        for(int x:nums2)
        {
            if(mp1[x] == 0 && mp2[x]>0)
            {
              ans[1].push_back(x);
              mp2[x] = -1 ;
            }
        }
        return ans ;
        
    }
};