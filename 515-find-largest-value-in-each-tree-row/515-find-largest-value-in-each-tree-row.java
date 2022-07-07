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
    public List<Integer> largestValues(TreeNode root) {
        List<Integer> list = new ArrayList();
        dfs(root, list, 0);
        return list;
    }
    
    public void dfs(TreeNode root, List<Integer> list, int level){
        if(root==null) return ;
        if(level==list.size()) list.add(root.val);
        else list.set(level, Math.max(list.get(level), root.val));
        
        dfs(root.left, list, level+1);
        dfs(root.right, list, level+1);
    }
}