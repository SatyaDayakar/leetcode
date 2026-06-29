class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> ans;

        int i = 0;

        while (i < nums.size() && nums[i] < 0)
            i++;

        int j = i;
        i--;

        while (i >= 0 || j < nums.size())
        {
            if (i >= 0 && j < nums.size())
            {
                if (abs(nums[i]) < abs(nums[j]))
                {
                    ans.push_back(nums[i] * nums[i]);
                    i--;
                }
                else
                {
                    ans.push_back(nums[j] * nums[j]);
                    j++;
                }
            }
            else if (i >= 0)
            {
                ans.push_back(nums[i] * nums[i]);
                i--;
            }
            else
            {
                ans.push_back(nums[j] * nums[j]);
                j++;
            }
        }

        return ans;
    }
};