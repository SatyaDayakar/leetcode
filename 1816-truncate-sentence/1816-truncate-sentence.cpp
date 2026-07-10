class Solution {
public:
    string truncateSentence(string s, int k) {

        int i = 0 ;

        while(k>0)
        {
            while(i<s.size()&& s[i]== ' ')
            i++ ;
            while(i<s.size()&& s[i]!=' ')
            i++ ;
            --k ;
        }
        s.erase(i , s.size()-i);
        return s ;
        
    }
};