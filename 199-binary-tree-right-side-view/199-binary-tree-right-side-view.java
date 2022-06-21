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
    Map<Integer,Integer> ump; 
    public List<Integer> rightSideView(TreeNode root) {
        ump = new HashMap<>();
        printRightView(root,0);
        List<Integer> list = new ArrayList<>();
        for(Integer key : ump.keySet()) {
            list.add(ump.get(key));
        }
        return list;
        
    }
    
    public void printRightView(TreeNode root, int d) {
        if(root == null) return;
        if(ump.containsKey(d) == false) {
            ump.put(d,root.val);
        }
        printRightView(root.right,d+1);
        printRightView(root.left,d+1);
    }
}