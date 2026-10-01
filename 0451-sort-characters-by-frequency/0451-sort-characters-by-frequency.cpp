class Solution {
public:

    static bool compare(pair<char,int>p1 , pair<char,int>p2)
     {
        if( p1.second>p2.second )
        return true ;
        return false ;
     }
    string frequencySort(string s) {
        string ans = "";
        
        unordered_map<char,int> mp ;
        for(int i = 0 ; i<s.size();i++)
        {
            mp[s[i]]++ ;
        }
        vector<pair<char, int>> v(mp.begin(), mp.end());
        sort(v.begin(),v.end(),compare);
        for(int i = 0 ; i<v.size();i++)
        {
            while(v[i].second > 0)
            {
            ans+=v[i].first ;
            v[i].second-- ;
            }
        }
        return ans ;

    }
};