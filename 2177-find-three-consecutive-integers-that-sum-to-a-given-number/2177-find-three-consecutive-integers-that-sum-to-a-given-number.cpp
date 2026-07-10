class Solution {
public:
    vector<long long> sumOfThree(long long num) {

        vector<long long> ans ;
        
         if(num == 1 || num==2)
         return ans ;
        if(num%3 == 0)
        {
            long long  s = num/3 ;
            ans.push_back(s-1);
            ans.push_back(s);
            ans.push_back(s+1);
        }
        return ans ;

        
        
    }
};