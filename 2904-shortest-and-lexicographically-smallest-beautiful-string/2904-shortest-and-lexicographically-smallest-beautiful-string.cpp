class Solution { 
public: 
    string shortestBeautifulSubstring(string s, int k) { 

        int l = 0; 
        int count = 0; 
        int mini = INT_MAX;
        int start = -1;

        for (int r = 0; r < s.size(); r++) { 
            
            if (s[r] == '1') 
                count++; 

            if (count == k) { 

                while (s[l] == '0') 
                    l++; 

                int len = r - l + 1;

                if (len < mini) {
                    mini = len;
                    start = l;
                }
                else if (len == mini) {
                    for (int i = 0; i < len; i++) {
                        if (s[l + i] < s[start + i]) {
                            start = l;
                            break;
                        }
                        else if (s[l + i] > s[start + i]) {
                            break;
                        }
                    }
                }

                count--;
                l++;
            }  
        } 

        if (start == -1)
            return "";

        return s.substr(start, mini);
    } 
};