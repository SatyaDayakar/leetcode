class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
    
        unordered_map<int,int> mp ;
        for(int i = 0 ; i<matrix.size();i++)
        {
        for(int j = 0 ; j<matrix[0].size();j++)
        {
           if(mp[matrix[i][j]]>i)
           return false ;
           else
           mp[matrix[i][j]]++ ;
        }
          
        }
        int r = matrix.size();
        for(int i = 0 ; i<matrix[0].size();i++)
        {
        for(int j = 0 ; j<matrix.size();j++)
        {
            if(mp[matrix[j][i]]>r)
           return false ;
           else
           mp[matrix[j][i]]++ ;
            
        }
       r++ ;
            
        }
        return true ;
        
    }
};