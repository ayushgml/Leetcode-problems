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
    public int findTilt(TreeNode root) {
        if(root==null) return 0;
        
        if(root.left!=null && root.right!=null)
            return Math.abs(sumBT(root.left)-sumBT(root.right)) + findTilt(root.left) + findTilt(root.right);
        else if(root.left!=null && root.right==null) 
            return Math.abs(sumBT(root.left)) + findTilt(root.left);
        else if(root.left==null && root.right!=null) 
            return Math.abs(sumBT(root.right)) + findTilt(root.right);
        
        return 0;
        
    }
    
    public int sumBT(TreeNode root){
        if(root==null) return 0;
        
        return root.val + sumBT(root.left) + sumBT(root.right);
    }
}