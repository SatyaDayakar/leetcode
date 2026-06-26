class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0, right = matrix.size() - 1;
        int mid1 = 0, mid2 = 0;
        int row = -1;

        while (left <= right) {
            mid1 = left + (right - left) / 2;

            if (matrix[mid1][0] == target)
                return true;
            else if (matrix[mid1][0] < target) {
                row = mid1;
                left = mid1 + 1;
            } else {
                right = mid1 - 1;
            }
        }

        if (row == -1)
            return false;

        left = 0;
        right = matrix[0].size() - 1;

        while (left <= right) {
            mid2 = left + (right - left) / 2;

            if (matrix[row][mid2] == target)
                return true;
            else if (matrix[row][mid2] < target)
                left = mid2 + 1;
            else
                right = mid2 - 1;
        }

        return false;
    }
};