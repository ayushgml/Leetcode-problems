class Solution {  
    public static int[][] floodFill(int[][] image, int sr, int sc, int color) {
        if (image[sr][sc] == color) return image;
        boolean[][] check = new boolean[image.length][image[0].length];
        changeColor(check, image, sr, sc, color, image[sr][sc]);
        return image;
    }


    public static void changeColor(boolean[][] check ,int[][] image, int sr, int sc, int color, int scolor) {
        check[sr][sc] = true;
        image[sr][sc] = color;
        if (sr > 0 && image[sr - 1][sc] == scolor) { //Up
            if (!check[sr - 1][sc]) changeColor(check, image, sr - 1, sc, color, scolor);
            image[sr - 1][sc] = color;
        }
        if (sr + 1 < image.length && image[sr + 1][sc] == scolor) { //Down
            if (!check[sr + 1][sc]) changeColor(check, image, sr + 1, sc, color, scolor);
            image[sr + 1][sc] = color;
        }

        if (sc > 0 && image[sr][sc - 1] == scolor) { //Left
            if (!check[sr][sc - 1]) changeColor(check, image, sr, sc - 1, color, scolor);
            image[sr][sc - 1] = color;
        }
        if (sc + 1 < image[0].length && image[sr][sc + 1] == scolor) { //Right
            if (!check[sr][sc + 1]) changeColor(check, image, sr, sc + 1, color, scolor);
            image[sr][sc + 1] = color;
        }
    }
}