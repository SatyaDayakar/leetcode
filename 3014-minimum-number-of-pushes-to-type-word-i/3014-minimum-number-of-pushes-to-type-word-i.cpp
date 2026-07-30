class Solution {
public:
    int minimumPushes(string word) {

      int n = word.size();
      int ans  =  n + max(n - 8, 0) + max(n - 16, 0) + max(n - 24, 0) ;
      return ans ;
        
    }
};