class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        string s = "qwertyuiopasdfghjklzxcvbnm";
        unordered_map<char, int> mp;

        int count = 1;
        for (int i = 0; i < s.size(); i++) {
            if (i == 10 || i == 19)
                count++;
            mp[s[i]] = count;
        }

        for (int i = 0; i < words.size(); i++) {

            if (words[i].size() == 1) {
                ans.push_back(words[i]);
                continue;
            }

            for (int j = 0; j < words[i].size() - 1; j++) {
                char c1 = tolower(words[i][j]);
                char c2 = tolower(words[i][j + 1]);

                if (mp[c1] != mp[c2])
                    break;

                if (j == words[i].size() - 2)
                    ans.push_back(words[i]);
            }
        }

        return ans;
    }
};