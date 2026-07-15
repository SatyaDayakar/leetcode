class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
         int minc = prices[0];
         int maxp = INT_MIN ;

         for(int i = 1 ; i<prices.size();i++)
         {   
             
             maxp = max(maxp , prices[i]-minc);
             minc = min(minc , prices[i]);
         }
         if (maxp < 0)
         return  0 ;
         return maxp ;
    }
};