class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n = colors.size();
        int ans = 0 ;

        for(int i = 0 ; i<colors.size();i++)
        {
            int l = (i+n-1)%n ;
            int r = (i+1)%n ;
            if(colors[i] != colors[l] && colors[i]!=colors[r])
            ans++ ;

        }

        return ans ;
        
    }
};