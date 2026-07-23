class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {

        unordered_map<int , int > mp  ;
        int ans = INT_MAX ;
        int count = -1 ;
        for(int i = 0 ; i<cards.size();i++)
        {
            if(mp[cards[i]] == 0)
            {
                mp[cards[i]] = i+1 ;
            }
            else
            {
                count = i-mp[cards[i]]+2 ;
                mp[cards[i]]=i+1 ;
                ans = min(ans , count );
            }
        }
        if(count == -1)
        return -1 ;

        return ans ;
        
    }
};