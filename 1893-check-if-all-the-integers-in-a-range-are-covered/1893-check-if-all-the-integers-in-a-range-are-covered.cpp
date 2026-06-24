class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        unordered_map<int, bool> covered;

        for (auto range : ranges) {
            int start = range[0];
            int end = range[1];

            for (int num = start; num <= end; num++) {
                covered[num] = true;
            }
        }


        for (int num = left; num <= right; num++) {
            if (covered[num] == false) {
                return false;
            }
        }

        return true;
    }
};