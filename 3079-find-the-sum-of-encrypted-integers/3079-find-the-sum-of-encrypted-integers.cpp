class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            int md = 0;
            int size = 0;

            while(nums[i] > 0)
            {
                md = max(md, nums[i] % 10);
                nums[i] /= 10;
                size++;
            }

            int encrypted = 0;

            while(size > 0)
            {
                encrypted = encrypted * 10 + md;
                size--;
            }

            ans += encrypted;
        }

        return ans;
    }
};