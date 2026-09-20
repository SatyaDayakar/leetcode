class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {

      
        
            for(int j = 0 ; j<grid[0].size()-1;j++)
            {
                if(grid[0][j] == grid[0][j+1])
                return false ;
            }
        

        for(int i = 1 ; i<grid.size();i++)
        {
            for(int j = 0 ; j<grid[i].size();j++)
            {
                if(grid[i][j] != grid[i-1][j])
                return false ;
            }
        }
        return true ;
        
    }
};