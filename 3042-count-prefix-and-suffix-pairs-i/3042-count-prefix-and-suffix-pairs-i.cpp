class Solution {
public:
     int isPrefixAndSuffix(string str1, string str2)
     {
        for(int i = 0 ; i<str1.size() ;i++)
        {
            if(str1[i] != str2[i])
            return 0 ;
        }
        for(int i = 0 , j = str2.size()-str1.size(); i<str1.size() ;i++, ++j)
        {
            if(str1[i] != str2[j])
            return 0 ;
        }
        return 1 ;
     }
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans = 0 ;

        for(int i = 0 ; i<words.size()-1;i++)
        {
            for(int j = i+1 ;j<words.size();j++ )
            {
                if(isPrefixAndSuffix(words[i] , words[j]))
                ans++ ;
            }
        }
        return ans ;
        
    }
};