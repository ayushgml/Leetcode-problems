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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> List = new ArrayList<>();
        if(root==null) return List;
        Queue<TreeNode> q = new LinkedList();
        q.add(root);
        q.add(null);
        boolean flag = false;
        List<Integer> subList = new ArrayList<Integer>();
        while(q.size() > 1){
            TreeNode curr = q.poll();
            if(curr==null){
                if(flag==true){
                    Collections.reverse(subList);
                    flag=false;
                }else{
                    flag=true;
                }
                List.add(subList);
                subList = new ArrayList<Integer>();
                q.add(null);
                continue;
            }
            subList.add(curr.val);
            if(curr.left !=null) q.add(curr.left);
            if(curr.right != null) q.add(curr.right);
        }
        if(flag==true) Collections.reverse(subList);
        List.add(subList);
        return List;
    }
}