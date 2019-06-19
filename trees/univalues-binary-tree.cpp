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
    int r=INT32_MAX;
public:
    bool isUnivalTree(TreeNode* root) {
        if(!root)
        {
            return true;
        }
        if(r==INT32_MAX)
        {
            r=root->val;
        }
        else
        {
            if(r!=root->val)
            {
                return false;
            }
        }
        return isUnivalTree(root->left)&&isUnivalTree(root->right);
    }
};
