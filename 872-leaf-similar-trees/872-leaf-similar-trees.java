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
    ArrayList<Integer> arr1 = new ArrayList();
    ArrayList<Integer> arr2 = new ArrayList();
    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        leafSequence1(root1);
        leafSequence2(root2);
        
        if(arr1.equals(arr2)==true)
            return true;
        return false;
    }
    
    public void leafSequence1(TreeNode root){ 
        if(root==null) return;
        
        if(root.left==null && root.right==null)
            arr1.add((Integer)root.val);
        if(root.left!=null)
            leafSequence1(root.left);
        if(root.right!=null)
            leafSequence1(root.right);
    }
    
    public void leafSequence2(TreeNode root){ 
        if(root==null) return;
        
        if(root.left==null && root.right==null)
            arr2.add((Integer)root.val);
        if(root.left!=null)
            leafSequence2(root.left);
        if(root.right!=null)
            leafSequence2(root.right);

    }
}