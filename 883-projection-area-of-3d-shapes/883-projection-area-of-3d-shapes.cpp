class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> rowmax;
        vector<int> colmax;
        for(int i=0;i<n;i++){
            int maxinrow = 0;
            for(int j=0;j<n;j++){
                if(grid[i][j]>maxinrow)
                    maxinrow=grid[i][j];
            }
            rowmax.push_back(maxinrow);
        }
        
        for(int i=0;i<n;i++){
            int maxincol = 0;
            for(int j=0;j<n;j++){
                if(grid[j][i]>maxincol)
                    maxincol=grid[j][i];
            }
            rowmax.push_back(maxincol);
        }
        
        int base =0;
        for(int i=0;i<n;i++){
            int maxincol = 0;
            for(int j=0;j<n;j++){
                if(grid[i][j]>0)
                    base+=1;
            }
        }
        
        int sum = accumulate(rowmax.begin(), rowmax.end(), 0) + accumulate(colmax.begin(), colmax.end(), 0) + base;
        
        return sum;
    }
};