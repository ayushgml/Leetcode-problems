class Solution {
    boolean seen[][];
    public int maxAreaOfIsland(int[][] grid) {
        int maxArea = 0;
        int rows = grid.length;
        int columns = grid[0].length;
        seen = new boolean[rows][columns];
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                maxArea = Math.max(maxArea, area(i, j, grid));
            }
        }
        return maxArea;
    }
    
    public int area(int row, int column, int[][] grid){
        if(row < 0 || 
           row >= grid.length || 
           column < 0 || 
           column>=grid[row].length || 
           grid[row][column]==0 || 
           seen[row][column]) return 0;
        
        seen[row][column] = true;
        return (1 + area(row+1, column, grid) + area(row-1, column, grid) + 
                area(row, column+1, grid) + area(row, column-1, grid));
    }
}