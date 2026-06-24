class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int> arr(52, 0);
        for(auto& i: ranges)
        {
            arr[i[0]]++;
            arr[i[1] + 1]--;
        }
        for(int i = 1; i < 51; i++)
        {
            arr[i] += arr[i-1];
        }
        for(int i = left; i <= right; i++)
        {
            if(arr[i] == 0) return false;
        }
        return true;
    }
};