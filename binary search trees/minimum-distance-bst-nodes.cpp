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
    int res=INT32_MAX,prev=-1;
public:
    int minDiffInBST(TreeNode* root) {

        helper(root);
        return res;
    }

    void helper(TreeNode *root)
    {
        if(!root)
        {
            return;
        }
        helper(root->left);
        if(prev!=-1 &&abs(root->val-prev)<res)
        {
            res=abs(root->val-prev);
        }

        prev=root->val;
        helper(root->right);
    }
};
