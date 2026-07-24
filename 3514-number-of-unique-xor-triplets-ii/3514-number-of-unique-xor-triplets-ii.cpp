class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {

        int n = nums.size();
        unordered_set<int> pairs;
        unordered_set<int> ans;

        for (int x : nums)
        ans.insert(x);

        for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        pairs.insert(nums[i] ^ nums[j]);

        for (int p : pairs)
        for (int x : nums)
        ans.insert(p ^ x);

        return ans.size();
    
        
    }
};