class Solution {
public:
    int maxCoins(vector<int>& piles) {

        sort(piles.begin(),piles.end());
        int s = piles.size()/3 ;
        int sum = 0 ;
        for(int i = piles.size()-2 ; i>=s ; i-=2)
        {
            sum+=piles[i];
        }
        return sum ;
  
    }
};