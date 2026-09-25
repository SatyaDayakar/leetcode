class NeighborSum {
public:
    vector<vector<int>> grid;
    vector<pair<int,int>> pos;
    int n;

    NeighborSum(vector<vector<int>>& grid) {
        this->grid = grid;
        n = grid.size();

        pos.resize(n * n);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                pos[grid[i][j]] = {i, j};
            }
        }
    }
    
    int adjacentSum(int value) {
        int i = pos[value].first;
        int j = pos[value].second;
        int sum = 0;

        if(i > 0)
            sum += grid[i-1][j];

        if(i < n-1)
            sum += grid[i+1][j];

        if(j > 0)
            sum += grid[i][j-1];

        if(j < n-1)
            sum += grid[i][j+1];

        return sum;
    }
    
    int diagonalSum(int value) {
        int i = pos[value].first;
        int j = pos[value].second;
        int sum = 0;

        if(i > 0 && j > 0)
            sum += grid[i-1][j-1];

        if(i > 0 && j < n-1)
            sum += grid[i-1][j+1];

        if(i < n-1 && j > 0)
            sum += grid[i+1][j-1];

        if(i < n-1 && j < n-1)
            sum += grid[i+1][j+1];

        return sum;
    }
};