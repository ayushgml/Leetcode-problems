class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count =0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j] == '1'){
                    BFS(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
    
    void BFS(vector<vector<char>>& grid, int i , int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size() || grid[i][j]=='0') return;
        
        grid[i][j]='0';
        
        BFS(grid,i+1,j);
        BFS(grid,i-1,j);
        BFS(grid,i,j-1);
        BFS(grid,i,j+1);
    }
};