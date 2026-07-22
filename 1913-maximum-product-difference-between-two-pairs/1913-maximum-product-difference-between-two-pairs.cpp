class Solution {
public:
    int maxProductDifference(vector<int>& nums) {

         int a = 0, b = 0;              
        int c = INT_MAX, d = INT_MAX; 

        for(int x : nums) {
            if(x > a) {
                b = a;
                a = x;
            }
            else if(x > b) {
                b = x;
            }

            if(x < c) {
                d = c;
                c = x;
            }
            else if(x < d) {
                d = x;
            }
        }

        return (a * b) - (c * d);


        
    }
};