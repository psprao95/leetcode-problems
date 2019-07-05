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
    int res=0;

public:
    int diameterOfBinaryTree(TreeNode* root) {

        int l=helper(root);

        return res;
    }

    int helper(TreeNode *root)
    {
        if(!root)
        {
            return 0;
        }
        int left=0;
        left=helper(root->left);
        int right=helper(root->right);

      res=max(res,left+right);
        return max(left,right)+1;
    }
};
