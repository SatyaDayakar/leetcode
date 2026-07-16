class Solution {
public:
    long long gcdSum(vector<int>& nums) {

        int maxx = INT_MIN ;
        vector<int> pgcd(nums.size()) ;
        for(int i = 0 ; i<nums.size();i++)
        {
            maxx = max(maxx, nums[i]);
            pgcd[i]= gcd(nums[i], maxx);
        }
        sort(pgcd.begin(), pgcd.end());
        long long ans = 0 ;
        for(int i = 0 , j = pgcd.size()-1 ; i<j ; i++ , j--)
        {
           int g = gcd(pgcd[i],pgcd[j]);
           ans+=g ;
        }
        return ans ;
        
    }
};