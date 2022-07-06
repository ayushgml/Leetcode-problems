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
    public int deepestLeavesSum(TreeNode root) {
        int depth_tree = depth(root);
        int curr_depth=1;
        int sum = 0;
        return calculateSum(root, curr_depth, depth_tree, sum);
    }
    
    public int calculateSum(TreeNode root, int curr_depth, int depth_tree, int sum){
        if(root==null) return 0;
        if(root.left==null && root.right==null && curr_depth==depth_tree) return sum+=root.val;
        else if(root.left==null && root.right==null && curr_depth!=depth_tree) return 0;
        return calculateSum(root.right, curr_depth+1, depth_tree, sum) + calculateSum(root.left, curr_depth+1, depth_tree, sum);
    }
    
    public int depth(TreeNode root){
        if(root==null) return 0;
        return Math.max(depth(root.left),depth(root.right)) + 1;
    }
}