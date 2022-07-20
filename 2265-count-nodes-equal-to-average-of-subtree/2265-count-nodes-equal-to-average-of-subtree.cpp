/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int averageOfSubtree(TreeNode* root) {
        if(root==nullptr) return 0;
        if(root->left==nullptr && root->right==nullptr) return 1;
        if(root->val == ((countSum(root->left) + countSum(root->right)) + root->val) / (countNodes(root->left) + countNodes(root->right) + 1)){
            return 1 + averageOfSubtree(root->left) + averageOfSubtree(root->right);
        }
        return averageOfSubtree(root->left) + averageOfSubtree(root->right);
    }
    
    int countNodes(TreeNode* root){
        if(root==nullptr) return 0;
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
    
    int countSum(TreeNode* root){
        if(root==nullptr) return 0;
        return countSum(root->left) + countSum(root->right) + root->val;
    }
};

// public int averageOfSubtree(TreeNode root) {
//         if(root==null) return 0;
//         if(root.left==null && root.right==null) return 1;
//         if(root.val == ((countSum(root.left) + countSum(root.right)) + root.val) / (countNodes(root.left) + countNodes(root.right) + 1)){
//             return 1 + averageOfSubtree(root.left) + averageOfSubtree(root.right);
//         }
//         return averageOfSubtree(root.left) + averageOfSubtree(root.right);
//     }
    
//     public int countNodes(TreeNode root){
//         if(root==null) return 0;
//         return countNodes(root.left) + countNodes(root.right) + 1;
//     }
    
//     public int countSum(TreeNode root){
//         if(root==null) return 0;
//         return countSum(root.left) + countSum(root.right) + root.val;
//     }