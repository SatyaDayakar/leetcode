class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int p = -1;

        for (int i = n - 1; i > 0; --i) {
            if (nums[i] > nums[i - 1]) {
                p = i - 1;
                break;
            }
        }

        if (p == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        int d = n - 1;

        while (nums[d] <= nums[p]) {
            d--;
        }

        swap(nums[p], nums[d]);
        reverse(nums.begin() + p + 1, nums.end());
    }
};