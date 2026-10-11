class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int> ans ;
        long long a = 1 ;
        for(int i = 0 ; i<=rowIndex  ; i++)
        {
            ans.push_back(a);
            a= a*(rowIndex-i)/(i+1);
        }
        return ans ;
        
    }
};