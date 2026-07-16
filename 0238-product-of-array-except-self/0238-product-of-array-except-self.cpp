class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> pre;
        vector<int> suf;
        int ans = 1 ;
        pre.push_back(ans);
        for(int i = 0 ; i<nums.size()-1;i++)
        {
           ans*=nums[i];
           pre.push_back(ans);
        }
        ans = 1 ;
        suf.push_back(ans);
        for(int i = nums.size()-1 ; i>0 ;i--)
        {
          ans*=nums[i];
          suf.push_back(ans);
        }
        reverse(suf.begin(),suf.end());

        vector<int>answer ;
        for(int i = 0 ; i<nums.size();i++)
        {
            answer.push_back(pre[i]*suf[i]);
        }
        return answer ;
        
    }
};