class Solution {
public:
    int countStaircase(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0 ;
        for(int i = 0 ; i<n ; i++)
        {
            int k = 0 ;
            int b = 0 ;
            unordered_map<int,int> f , o ;
            for(int j = i ; j<n ; j++)
            {

                int x = nums[j];
                if(f[x] == 0 )
                {
                    o[x]= ++k ;
                    b++ ;
                }
                if(f[x]==o[x])
                b++ ;
                f[x]++ ;
                if(f[x]==o[x])
                b-- ;
                if(b == 0)
                ans++ ;
                
            }
        }
        return ans ;
        
    }
};