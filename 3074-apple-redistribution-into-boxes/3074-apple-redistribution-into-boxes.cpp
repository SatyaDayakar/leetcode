class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {

        int ta = 0 ;
        for(int x:apple)
        ta+=x ;
        sort(capacity.begin(),capacity.end());
        int ans = 0 ;
        for(int i = capacity.size()-1 ; ta>0 && i>=0 ; --i)
        {
            ta-=capacity[i];
            ans++ ;
            
        }
        return ans ;
        
    }
};