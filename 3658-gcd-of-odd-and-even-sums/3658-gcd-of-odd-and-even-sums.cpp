class Solution {
public:
    int gcdOfOddEvenSums(int n) {

        int oc = n*n ;
        int ec = n*(n+1);
        while(oc!=0)
        {
            int rem = ec%oc ;
            ec = oc  ;
            oc = rem ;  
        }
        return ec ;
        
    }
};