class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {


        int count = 0 ;
        int total = grid.size()*grid[0].size() ;
        vector<int> ans(total , 0);
        for(int i = 0 ; i<grid.size();i++)
        {
            for(int j = 0 ; j<grid[i].size();j++)
            {
               int pos = (count+k)%total ;
               ans[pos]= grid[i][j];
               count++ ;

            }
        }
          count = 0 ;
         for(int i = 0 ; i<grid.size();i++)
        {
            for(int j = 0 ; j<grid[i].size();j++)
            {
               
                 grid[i][j]= ans[count];
                 count++ ;
            }
        }

        return grid ;        
        
    }
};