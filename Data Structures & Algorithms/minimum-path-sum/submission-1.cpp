class Solution {
public:
    void findMinSum(int row, int col, int m, int n, vector<vector<int>> &grid, vector<vector<int>> &pathSum){
        if(row == m-1 && col == n-1){
            return;
        }

        //move down
        if(row+1 < m && pathSum[row][col] + grid[row+1][col] < pathSum[row+1][col]){
            pathSum[row+1][col] = pathSum[row][col] + grid[row+1][col];
            findMinSum(row+1, col, m, n, grid, pathSum);
        }
        
        if(col + 1 < n && pathSum[row][col] + grid[row][col+1] < pathSum[row][col+1]){
           pathSum[row][col+1] = pathSum[row][col] + grid[row][col+1];
            findMinSum(row, col+1, m, n, grid, pathSum);
        }
        
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> pathSum(m, vector<int>(n, INT_MAX));
        pathSum[0][0] = grid[0][0];

        findMinSum(0, 0, m, n, grid, pathSum);
        return pathSum[m-1][n-1];
    }
};