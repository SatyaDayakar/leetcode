class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {

        sort(arr.begin(), arr.end());

        arr[0] = 1;

        int maxCount = 1;
        int i = 1;

        while (i < arr.size() && arr[i] == 1)
        {
            i++;
        }

        for (; i < arr.size(); i++)
        {
            if (arr[i] > maxCount)
            {
                maxCount++;
            }
        }

        return maxCount;
    }
};