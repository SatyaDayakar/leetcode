class Solution {
public:
    int minimumPushes(string word) {
        
        vector<int>letters(26 , 0);
        for(int i = 0 ; i<word.size();i++)
        {
            letters[word[i]-'a']++ ;
        }
        sort(letters.begin(),letters.end());

        int count = 1 ;
        int ans = 0 ;
        for(int i = letters.size()-1 ; i >= 0 && letters[i] != 0 ; --i )
        {
           ans+= ceil(count/8.0)*letters[i] ;
           count++ ;
        }
        return ans ;
    }
};