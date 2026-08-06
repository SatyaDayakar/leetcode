class Solution {
public:
    int smallestNumber(int n, int t) {

        while(1)
        {
            int c = n ;
            int prod = 1 ;
          while(c>0)
          {
            prod*=(c%10);
            c/=10 ;
          }
        if((prod)%t == 0)
        return n ;
        n++ ;
        }
        
    }
};