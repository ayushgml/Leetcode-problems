class Solution {
    public List<List<Integer>> queensAttacktheKing(int[][] queens, int[] king) {
        List<List<Integer>> list = new ArrayList();
        boolean[][] seen = new boolean[8][8];
        for(int[] queen : queens){
            seen[queen[0]][queen[1]] = true;
        }
        
        int[] directions = {-1, 0, 1};
        for(int dir_x : directions){
            for(int dir_y : directions){
                if(dir_x ==0 && dir_y==0) continue;
                int x = king[0];
                int y = king[1];
                
                while(x+dir_x>=0 && x+dir_x<8 && y+dir_y>=0 && y+dir_y<8){
                    x+=dir_x;
                    y+=dir_y;
                    if(seen[x][y]){
                        list.add(Arrays.asList(x, y));
                        break;
                    }
                }
            }
        }
        return list;
    }
}