class Solution {
public:
    int brokenCalc(int startValue, int target) {
        
        int c = 0 ;
        while(target>startValue)
        {
            if(target%2 == 1)
            target++ ;
            else 
            target/=2 ;
            c++ ;
        }
        c+=(startValue-target);
        return c ;
    }
};