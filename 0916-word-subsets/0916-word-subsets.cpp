class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {

        vector<int> need(26, 0);

        for (int i = 0; i < words2.size(); i++) {

            vector<int> freq(26, 0);

            for (int j = 0; j < words2[i].size(); j++) {
                char ch = words2[i][j];
                freq[ch - 'a']++;
            }

            for (int k = 0; k < 26; k++) {
                if (freq[k] > need[k])
                    need[k] = freq[k];
            }
        }

        vector<string> ans;

        for (int i = 0; i < words1.size(); i++) {

            vector<int> freq(26, 0);

            for (int j = 0; j < words1[i].size(); j++) {
                char ch = words1[i][j];
                freq[ch - 'a']++;
            }

            int cnt = 0;

            for (int k = 0; k < 26; k++) {
                if (freq[k] >= need[k])
                    cnt++;
            }

            if (cnt == 26)
                ans.push_back(words1[i]);
        }

        return ans;
    }
};