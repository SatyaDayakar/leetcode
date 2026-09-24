class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {

        double m = 0;
        double sum = 0;

        for(int i = 0; i < brackets.size(); i++)
        {
            double intrst = brackets[i][1] / 100.0;

            double amount = min(income, brackets[i][0]) - m;

            sum += amount * intrst;

            m = brackets[i][0];

            if(m >= income)
                break;
        }

        return sum;
    }
};