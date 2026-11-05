class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {

        sort(arr2.begin(), arr2.end());

        int ans = 0;

        for(int i = 0; i < arr1.size(); i++)
        {
            int ind = lower_bound(arr2.begin(), arr2.end(), arr1[i]) - arr2.begin();

            int flag = 1;

            if(ind < arr2.size() && abs(arr2[ind] - arr1[i]) <= d)
                flag = 0;

            if(ind > 0 && abs(arr2[ind-1] - arr1[i]) <= d)
                flag = 0;

            if(flag == 1)
                ans++;
        }

        return ans;
    }
};