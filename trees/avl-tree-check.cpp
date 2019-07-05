

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
    bool isBalanced(TreeNode* root) {
        pair<int,bool>s= helper(root);
        return s.second;
    }

    pair<int,bool> helper(TreeNode *root)
    {
        if(!root)
        {
            return {0,true};
        }
        pair<int,bool> a=helper(root->left);
        pair<int,bool> b=helper(root->right);
        if(!a.second||!b.second||abs(a.first-b.first)>1)
        {
            return {max(a.first,b.first),false};
        }
        return {max(a.first,b.first)+1,true};
    }
};
