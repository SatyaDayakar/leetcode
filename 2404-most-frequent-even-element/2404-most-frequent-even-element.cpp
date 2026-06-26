class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {

        unordered_map<int , int > mp ;
        int ans = -1 , count = 0 ;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(nums[i]%2 == 0)
            {
                mp[nums[i]]++ ;
                if(mp[nums[i]] > count)
                {
                    count = mp[nums[i]];
                    ans = nums[i];
                }
                if(mp[nums[i]] == count)
                {
                    ans = (nums[i]<ans) ? nums[i]: ans ;
                }

            }

        }

        return ans ;
        
    }
};