class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        sort(grades.begin(), grades.end());

        long long prevSum = 0;
        long long currSum = 0;

        int prevSize = 0;
        int currSize = 0;

        int ans = 0;

        for (int x : grades) {
            currSum += x;
            currSize++;

            if (currSize > prevSize && currSum > prevSum) {
                ans++;

                prevSize = currSize;
                prevSum = currSum;

                currSize = 0;
                currSum = 0;
            }
        }

        return ans;
    }
};