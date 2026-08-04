class Solution {
public:
    bool isValid(string word) {

        if(word.size()<3)
        return false ;
        int v = 0 , co = 0 ;
        for(int i = 0 ; i<word.size();i++)
        {
           if(word[i]== '@' || word[i]== '#' || word[i]== '$')
           return false ;
           else if (isalpha(word[i]))
            {
                char c = tolower(word[i]);
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                    v = 1 ;
                else
                    co = 1;
            }
        }
        return v&&co ;
        
    }
};