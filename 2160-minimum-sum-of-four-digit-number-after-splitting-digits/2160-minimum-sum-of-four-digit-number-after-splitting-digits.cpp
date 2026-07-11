class Solution {
public:
    int minimumSum(int num) {

        vector<int>ans ;

        while(num!=0)
        {
            ans.push_back(num%10);
            num/=10 ;
        }
        sort(ans.begin(), ans.end());
        int new1 = ans[2]+(10*ans[0]);
        int new2 = ans[3]+(10*ans[1]);
        return new1+new2 ;
        
    }
};