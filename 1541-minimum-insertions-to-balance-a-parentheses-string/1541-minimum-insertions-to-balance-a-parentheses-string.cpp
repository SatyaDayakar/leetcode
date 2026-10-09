class Solution {
public:
    int minInsertions(string s) {

        int open = 0 ;
        int close = 0 ;
        int ans = 0 ;
        for(int i = 0 ; i<s.size();i++)
        {
            if(s[i]=='(')
            open++ ;
            else
            {
                if(open == 0)
                ans++ ;
                else
                open-- ;
                if(i<s.size()-1 && s[i] == s[i+1])
                i++ ;
                else
                ans++ ;
               
            }
        }
        ans+=(open*2);
        return ans ;
        
    }
};