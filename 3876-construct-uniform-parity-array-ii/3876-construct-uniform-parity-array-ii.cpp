class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int oc = 0 , ec = 0 ;
        int mino = INT_MAX ;
        int mine = INT_MAX ;
        for(int i = 0 ; i<nums1.size() ;i++)
        {
            if(nums1[i]%2 == 0)
            {
            ec++ ;
            mine = min(nums1[i] , mine);
            }
            else
            {
            oc++ ;
            mino = min(nums1[i], mino);

            }
        }

        if(ec == nums1.size() || oc == nums1.size())
        return true ;

        if(mine > mino)
        return true ;

        return false ;

        

        
    }
};