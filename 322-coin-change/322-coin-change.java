class Solution {
    public int coinChange(int[] coins, int amount) {
        int[][] t = new int[coins.length+1][amount+1];
        for(int i = 0;i<amount+1;i++) t[0][i]=Integer.MAX_VALUE-1;
        for(int i = 1;i<coins.length+1;i++) t[i][0] = 0;
        if(coins.length>0){
            for(int i = 1;i<amount+1;i++){
                if(i%coins[0]==0) t[1][i]=i/coins[0];
                else t[1][i] = Integer.MAX_VALUE-1;
            }
        }
        for(int i = 2;i<coins.length+1;i++){
            for(int j = 1;j<amount+1;j++){
                if(coins[i-1]<=j) t[i][j]=Math.min(1+t[i][j-coins[i-1]],t[i-1][j]);
                else t[i][j] = t[i-1][j];
            }
        }
        if(t[coins.length][amount]==Integer.MAX_VALUE-1) return -1;
        return t[coins.length][amount];
    }
}