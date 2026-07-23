class Solution {
public:
    int lengthOfLongestSubstring(string nums) {
        unordered_map<char , int> mp ;
        int count = 0 ;
        int ans  = 0 ;
        for(int l = 0 , i = 0  ; i<nums.size(); i++)
        {
            if(mp[nums[i]] == 0 )
            {
                count++ ;
                mp[nums[i]] = i+1 ;
            }
            else
            {
                ans = max(ans , count);
                while(l<mp[nums[i]])
                {
                    count--;
                    l++ ;
                }
                mp[nums[i]] = i+1 ;
                count++ ;
            }
        }
      
        ans = max(count , ans) ;
        return ans ;
        
    }
};