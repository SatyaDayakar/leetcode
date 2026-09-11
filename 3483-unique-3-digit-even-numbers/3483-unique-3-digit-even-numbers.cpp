class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int cnt[10] = {0};
        
        for (int x : digits)
            cnt[x]++;
        
        int ans = 0;
        
        for (int i = 1; i <= 9; i++) {
            for (int j = 0; j <= 9; j++) {
                for (int k = 0; k <= 8; k += 2) {
                    
                    if (cnt[i] == 0)
                        continue;
                    
                    cnt[i]--;
                    
                    if (cnt[j] == 0) {
                        cnt[i]++;
                        continue;
                    }
                    
                    cnt[j]--;
                    
                    if (cnt[k] > 0)
                        ans++;
                    
                    cnt[j]++;
                    cnt[i]++;
                }
            }
        }
        
        return ans;
    }
};