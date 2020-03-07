/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> findLeaves(TreeNode* root) {
        vector<vector<int>> res;
        vector<int> r;
        while(root)
        {
            root=helper(root,r);
            res.push_back(r);
            r.clear();
        }
        return res;
    }

    TreeNode * helper(TreeNode *root,vector<int> &r)
    {
        if(!root)
        {
            return NULL;
        }
        if(!root->left &&!root->right)
        {
            r.push_back(root->val);
            return NULL;
        }
        root->left=helper(root->left,r);
        root->right=helper(root->right,r);
        return root;
    }
};
