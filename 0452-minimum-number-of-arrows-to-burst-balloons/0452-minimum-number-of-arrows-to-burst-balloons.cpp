class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int count = 1 , minn = points[0][1];
        for(int i = 1 ; i<points.size();i++)
        {
           if(points[i][0] <=  minn)
           {
             minn = min(points[i][1] , minn);
           }
           else
           {
            count++ ;
            minn = points[i][1];
           }
        }

        return count ;

        
    }
};