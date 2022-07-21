/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode convertBST(TreeNode root) {
        dfs(root, 0);
        return root;
    }

    public int dfs(TreeNode root, int sum){
        if(root == null) return sum;
        sum = dfs(root.right, sum);
        root.val += sum;
        sum = root.val;
        sum = dfs(root.left, sum);
        return sum;
    }
}