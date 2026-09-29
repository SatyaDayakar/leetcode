class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {

        int c = 0 ;
        char ch = suits[0];
        for(int i = 0 ; i<suits.size();i++)
        {
           if(suits[i] == ch)
           c++ ;
        }
        if(c == suits.size())
        return "Flush" ;

        unordered_map<int, int> mp ;
        int maxf = 0 ;
        int maxx = 0 ;
        for(int i = 0 ; i<ranks.size();i++)
        {
            mp[ranks[i]]++ ;
            maxf = max (maxf , mp[ranks[i]]) ;
            maxx = max (maxx , ranks[i]);
        }
        if(maxf >= 3)
        return "Three of a Kind" ;
        else if(maxf == 2)
        return "Pair";
        else
        return "High Card";



    }
};