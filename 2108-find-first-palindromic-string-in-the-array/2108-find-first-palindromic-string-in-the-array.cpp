class Solution {
public:
    bool pal(string& word)
    {
        for(int i = 0 , j = word.size()-1 ; i<j ;i++ ,--j)
        {
            if(word[i] != word[j])
            return false ;
        }
        return true ;
    }
    string firstPalindrome(vector<string>& words) {

        for(int i = 0 ; i<words.size();i++)
        {
            if(pal(words[i]))
            return words[i];
        }
        return "" ;
        
    }
};