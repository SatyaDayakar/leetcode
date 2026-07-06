class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> mp1 ;
        unordered_map<int, int> mp2 ;
        for(int i =0 ; i<nums1.size();i++)
        {
            if(mp1[nums1[i]] == 0 )
            mp1[nums1[i]]++ ;
        }
        for(int i =0 ; i<nums2.size();i++)
        {
            if(mp2[nums2[i]] == 0 )
            mp2[nums2[i]]++ ;
        }
        int ans = 0 ;
        for(int i = 0 ; i<nums1.size();i++)
        {
            if(mp2[nums1[i]] == 1)
            {
            ans++;
            }
        }
        int ans1 = 0 ;
        for(int i = 0 ; i<nums2.size();i++)
        {
            if(mp1[nums2[i]] == 1)
            {
            ans1++;
            }
        }
        vector<int>anss ;
        anss.push_back(ans);
        anss.push_back(ans1);
        return anss ;


        
    }
};