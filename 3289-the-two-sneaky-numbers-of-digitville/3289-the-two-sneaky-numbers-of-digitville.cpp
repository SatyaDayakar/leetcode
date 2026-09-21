class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> num(nums.size(),0);
        vector<int> ans;
        for(int i : nums){
            if(num[i]==1) ans.push_back(i);
            num[i]++;
        }
        return ans;
    }
};