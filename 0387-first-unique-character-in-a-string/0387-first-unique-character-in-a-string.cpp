class Solution {
public:
    int firstUniqChar(string s) {

        vector<int> has(26, 0);
        for(int i=0;i<s.length();i++){
            has[s[i] - 'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(has[s[i]-'a'] == 1){
                return i;
            }
        }
        return -1;

        
    }
};