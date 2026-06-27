class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin()  , intervals.end());
        vector<vector<int>> ans;

        int min1 = intervals[0][0] ;
        int min2 = intervals[0][1];
        for(int i = 1 ; i<intervals.size() ; i++)
        {
            if(intervals[i][0] <= min2 )
            {
                min2 = max(min2 , intervals[i][1]);
            }
            else
            {
                ans.push_back({min1 , min2});
                   min1 = intervals[i][0] ;
                   min2 = intervals[i][1];
            }
        }
        ans.push_back({min1 , min2});

        return ans ;
        
    }
};