class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        double c = INT_MAX;

        for (int i = 0, j = nums.size() - 1; i < j; i++, j--) {
            double ans = (nums[i] + nums[j]) / 2.0;
            c = min(ans, c);
        }

        return c;
    }
};