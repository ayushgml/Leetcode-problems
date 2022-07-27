class Solution {
    public int longestPalindromeSubseq(String s) {
        StringBuilder sb = new StringBuilder(s);  
        sb.reverse();  
        String s2 = sb.toString();
        return LCS(s, s2);
    }
    
    public int LCS(String text1, String text2) {
        int m = text1.length();
        int n = text2.length();
        int[][] t = new int[m+1][n+1];
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0 || j==0) t[i][j] = 0;
            }
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(text1.charAt(i-1)==text2.charAt(j-1)) t[i][j] = 1 + t[i-1][j-1];
                else t[i][j] = Math.max(t[i][j-1], t[i-1][j]);
            }
        }
        return t[m][n];
    }
}