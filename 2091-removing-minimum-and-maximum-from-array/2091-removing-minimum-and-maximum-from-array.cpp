class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int mini = INT_MAX;
        int maxi = INT_MIN;
        int mii;
        int mai;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < mini)
            {
                mini = nums[i];
                mii = i;
            }

            if(nums[i] > maxi)
            {
                maxi = nums[i];
                mai = i;
            }
        }

        int n = nums.size();

        int r1 = min(max(mii, mai) + 1,
                     n - min(mii, mai));

        int r2 = min(mii + 1, n - mii)
               + min(mai + 1, n - mai);

        return min(r1, r2);
    }
};