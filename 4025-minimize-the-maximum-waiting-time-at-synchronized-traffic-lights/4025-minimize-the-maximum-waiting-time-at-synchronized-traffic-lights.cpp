class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {

        int maxl = lights[0];
        int ans = INT_MIN ;
        for(int i = 0 ; i<lights.size();i++)
            {
                maxl = max(maxl , lights[i]);
            }
        for(int i = 0 ; i<arrivalTime.size();i++)
            {
                int r = arrivalTime[i]%period ;
                int w ;
                if(r<maxl)
                    w = 0 ;
                else
                    w = period-r ;
                ans = max(ans , w);
                    
            }
        return ans ;
    }
};