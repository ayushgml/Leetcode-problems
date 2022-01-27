class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        for(int p=0;p<k;p++){
        vector<int> v;
        v.push_back(grid[m-1][n-1]);
        for(int i=0;i<m-1;i++){
            v.push_back(grid[i][n-1]);
        }
        
        for(int i=0;i<m;i++){
            for(int j=n-1;j>0;j--){
                grid[i][j]=grid[i][j-1];
            }
        }
        for(int i=0;i<m;i++){
            grid[i][0]=v[i];
        }
        }
        return grid;
        
    }
};