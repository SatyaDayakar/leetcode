class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int oc = 0 , ec = 0 ;

        for(int i = 0 ; i<nums1.size() ;i++)
        {
            if(nums1[i]%2 == 0)
            {
            ec++ ;
            }
            else
            {
            oc++ ;
            }
        }

        if(ec == nums1.size() || oc == nums1.size())
        return true ; 
        if(oc>=1)
        return  true ; 

        return false ;  
        
    }
};