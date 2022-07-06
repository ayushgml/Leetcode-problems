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
    int result = 0;
    public int sumEvenGrandparent(TreeNode root) {
        if(root != null){
            if(root.val % 2 == 0) find(root, 0);
            if(root.left != null) sumEvenGrandparent(root.left);
            if(root.right != null) sumEvenGrandparent(root.right);
        }
        return result;
    }
    
    private void find(TreeNode node, int depth){
        if(depth == 2) result += node.val;
        if(node.left != null) find(node.left, depth + 1);
        if(node.right != null) find(node.right, depth + 1);
    }
}