class Solution {
public:
    vector<int> scoreValidator(vector<string>& e) {

        int score = 0;
        int counter = 0;
        vector<int> ans;

        for(int i = 0; i < e.size(); i++)
        {
            if(e[i] >= "0" && e[i] <= "6")
            {
                score += stoi(e[i]);
            }
            else if(e[i] == "WD" || e[i] == "NB")
            {
                score++;
            }
            else
            {
                counter++;
            }

            if(counter == 10)
                break;
        }

        ans.push_back(score);
        ans.push_back(counter);

        return ans;
    }
};