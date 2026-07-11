class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {

        int min1 = INT_MAX ;
        int min2 = INT_MAX ;
        unordered_map<int,int> mp ;
        for(int i = 0 ; i<nums1.size();i++)
        {
           min1 = min(min1 , nums1[i]);
           mp[nums1[i]]++ ;
        }
         int min3 = INT_MAX ;
        for(int i = 0 ; i<nums2.size();i++)
        {
           min2 = min(min2 , nums2[i]);
           if(mp[nums2[i]]>0 && nums2[i]<min3)
           min3 = nums2[i];
        }

        int ans = min(min1 , min2)*10 + max(min1 , min2);
        return min(min3 , ans) ;
        
    }
};