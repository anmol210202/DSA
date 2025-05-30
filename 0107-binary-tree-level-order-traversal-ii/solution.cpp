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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;

        queue<TreeNode*> q;   //dfs
        q.push(root);

        while(!q.empty()){
            int levelSize = q.size();
            vector<int> levelVal;
            while(levelSize--){
                TreeNode* curr = q.front();
                q.pop();
    
                levelVal.push_back(curr->val);
    
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            ans.push_back(levelVal);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
