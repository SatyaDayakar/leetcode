class Solution {
public:
    int distinctAverages(vector<int>& nums) {

        unordered_map<double, int> mp;
        sort(nums.begin(), nums.end());

        int c = 0;

        for (int i = 0, j = nums.size() - 1; i < j; i++, j--) {
            double ans = (nums[i] + nums[j]) / 2.0;

            if (mp[ans] == 0) {
                c++;
                mp[ans]++;
            }
        }

        return c;
    }
};