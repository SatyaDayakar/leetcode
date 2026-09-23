class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {

        vector <int> freq(101 , 0 );
        vector<int>ans(2 , -1);
        for(int i = 0 ; i<nums.size();i++)
        {
            freq[nums[i]]++ ;
        }
        int i = 1 ;
        while(i<freq.size()&&freq[i]==0)
         i++ ;
         ans[0]=i ;
         i++ ;
        for( ; i<freq.size();i++)
        {
           if(freq[i] != 0 && freq[i]!=freq[ans[0]])
           {
            ans[1]= i ;
            break ;
           }

        }
        if(ans[1] == -1)
        ans[0]= -1 ;
        return ans ;
        
    }
};