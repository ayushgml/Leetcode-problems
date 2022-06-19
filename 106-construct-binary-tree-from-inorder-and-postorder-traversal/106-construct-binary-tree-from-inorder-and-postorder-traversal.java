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
    public TreeNode buildTree(int[] inorder, int[] postorder) {
        if(postorder.length == 0) return null;
        if(postorder.length == 1) return new TreeNode(postorder[0]);
        
        return buildTree(postorder.length-1, 0, inorder.length-1, postorder, inorder);
    }
    
    public TreeNode buildTree( int postEnd, int inStart, int inEnd, int[] postorder, int[] inorder) {
        if(postEnd<0 || inStart>inEnd) return null;
        TreeNode node = new TreeNode(postorder[postEnd]);
        int Index=0;
        for(int i=inStart;i<=inEnd;i++) {
            if(inorder[i] == node.val) {
                Index=i;
                break;
            }
        }
        node.left = buildTree(postEnd - 1 - inEnd + Index, inStart, Index-1, postorder, inorder);
        node.right = buildTree(postEnd-1, Index+1, inEnd, postorder, inorder);
        return node;
    }
}