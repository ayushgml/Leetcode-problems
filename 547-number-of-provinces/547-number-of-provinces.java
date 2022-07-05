class Solution {
    public int findCircleNum(int[][] isConnected) {
        if (isConnected == null || isConnected.length == 0) {
            return 0;
        }
        int n = isConnected.length;
        boolean[] visited = new boolean[n];
        int count = 0;
        for (int r = 0; r < n; r++) {
            if (visited[r] == false) {
                dfs(isConnected, r, visited);
                count++;
            }
        }
        return count;
    }
    
    public void dfs(int[][] isConnected, int r, boolean[] visited) {
        for (int c = 0; c < isConnected.length; c++) {
            if (isConnected[r][c] == 1 && visited[c] == false) {
                visited[c] = true;
                dfs(isConnected, c, visited);
            }
        }
    }
}