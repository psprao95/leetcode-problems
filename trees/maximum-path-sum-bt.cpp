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
    int res=INT32_MIN;
public:
    int maxPathSum(TreeNode* root) {
        int p= helper(root);
        return res;

    }

    int helper(TreeNode *root)
    {
        if(!root)
        {
            return 0;
        }
        int left=helper(root->left);
        int right=helper(root->right);

        int m=max(root->val+max(left,right),root->val);
        int n=max(m,left+right+root->val);
        res=max(res,n);
        int re =max(left,right)+root->val;
       return m;
    }
};
