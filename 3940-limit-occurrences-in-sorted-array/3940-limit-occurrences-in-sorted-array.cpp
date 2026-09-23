class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {

        int count = 1;
        int l = 1;

        for(int r = 1; r < nums.size(); r++)
        {
            if(nums[r] == nums[l-1])
            {
                count++;
            }
            else
            {
                count = 1;
            }

            if(count <= k)
            {
                nums[l] = nums[r];
                l++;
            }
        }

        nums.resize(l);
        return nums;
    }
};