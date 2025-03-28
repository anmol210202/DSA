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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;

        targetSum-=root->val;

        if(!root->left and !root->right) return targetSum == 0;
        
        bool leftPath = hasPathSum(root->left , targetSum);
        bool rightPath = hasPathSum(root->right , targetSum);

        return leftPath or rightPath;
    }
};
