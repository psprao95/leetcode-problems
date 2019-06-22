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
    vector<string> res;

public:
    vector<string> binaryTreePaths(TreeNode* root) {
        string r;
        helper(root,r);
        return res;
    }

    void helper(TreeNode *root,string r)
    {
        if(!root)
        {
            return;
        }
        r+=to_string(root->val);
        if(!root->left && !root->right)
        {
            res.push_back(r);
        }

        helper(root->left,r+"->");
        helper(root->right,r+"->");

    }
};
