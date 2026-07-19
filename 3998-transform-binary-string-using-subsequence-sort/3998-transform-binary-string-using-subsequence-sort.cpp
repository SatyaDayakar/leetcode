class Solution {
public:
    vector<bool> transformStr(string s, vector<string>& strs) {

        vector<bool> ans(strs.size());

        int ones = 0;
        vector<int> prefs(s.size());

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1')
                ones++;
            prefs[i] = ones;
        }

        for (int i = 0; i < strs.size(); i++) {

            int fixones = 0;
            int qs = 0;

            for (int j = 0; j < strs[i].size(); j++) {
                if (strs[i][j] == '1')
                    fixones++;
                else if (strs[i][j] == '?')
                    qs++;
            }

            if (ones < fixones || fixones + qs < ones) {
                ans[i] = false;
                continue;
            }

            int need = ones - fixones;

            for (int j = strs[i].size() - 1; j >= 0; j--) {
                if (strs[i][j] == '?') {
                    if (need > 0) {
                        strs[i][j] = '1';
                        need--;
                    } else {
                        strs[i][j] = '0';
                    }
                }
            }

            int prefTarget = 0;
            ans[i] = true;

            for (int j = 0; j < strs[i].size(); j++) {
                if (strs[i][j] == '1')
                    prefTarget++;

                if (prefTarget > prefs[j]) {
                    ans[i] = false;
                    break;
                }
            }
        }

        return ans;
    }
};