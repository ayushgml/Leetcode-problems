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
        List<Integer> List = new ArrayList<Integer>();
        if(root==null) return List;
        Queue<TreeNode> q = new LinkedList();
        q.add(root);
        q.add(null);
        List<Integer> subList = new ArrayList<Integer>();
        while(q.size() > 1){
            TreeNode curr = q.poll();
            if(curr==null){
                List.add(Collections.max(subList));
                subList = new ArrayList<Integer>();
                q.add(null);
                continue;
            }
            subList.add(curr.val);
            if(curr.left !=null) q.add(curr.left);
            if(curr.right != null) q.add(curr.right);
        }
        List.add(Collections.max(subList));
        return List;
    }
}