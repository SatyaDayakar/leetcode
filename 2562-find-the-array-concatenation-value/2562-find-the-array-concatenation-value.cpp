class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
     
        if (nums.size() == 1)
            return nums[0];

        long long ans = 0;

        for (int i = 0, j = nums.size() - 1; i <= j; i++, j--) {
            if (i == j) {
                ans += nums[i];
            } else {
                long long x = nums[i];
                int temp = nums[j];

                while (temp > 0) {
                    x *= 10;
                    temp /= 10;
                }

                ans += x + nums[j];
            }
        }

        return ans;
    }
};