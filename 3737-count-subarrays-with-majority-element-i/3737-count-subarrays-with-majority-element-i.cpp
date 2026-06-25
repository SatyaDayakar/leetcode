class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {

        int ans = 0;
        int n = nums.size();

        for(int l = 0; l < n; l++) {

            int cnt = 0;

            for(int r = l; r < n; r++) {

                if(nums[r] == target)
                    cnt++;

                int len = r - l + 1;

                if(2 * cnt > len)
                    ans++;
            }
        }

        return ans;
    }
};