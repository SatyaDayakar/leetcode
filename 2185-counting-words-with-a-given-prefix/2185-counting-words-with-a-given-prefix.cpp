class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0 ;
        
        for(int i = 0 ; i<words.size();i++)
        {
            if(pref.size()> words[i].size())
            continue ;
            else
            {
                if(words[i].substr(0 , pref.size()) == pref)
                ans++ ;
            }
        }
        return ans ;
    }
};