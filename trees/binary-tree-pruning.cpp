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
    TreeNode* pruneTree(TreeNode* root) {
        bool k=helper(root);
        return root;
    }

    bool helper(TreeNode *root)
    {
        if(!root)
        {
            return true;
        }

        bool left=helper(root->left);


        if(left)
        {
            root->left=NULL;
        }
        bool right=helper(root->right);
        if(right)
        {
            root->right=NULL;
        }


        return left&&right&&root->val==0;
    }
};
