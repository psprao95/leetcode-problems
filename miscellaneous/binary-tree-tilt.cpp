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
    int findTilt(TreeNode* root) {
        return helper(root)[1];
    }

    vector<int> helper(TreeNode *root)
    {
        if(!root)
        {
            return {0,0,0};
        }
        vector<int> a=helper(root->left);
        vector<int> b=helper(root->right);
        return {a[0]+b[0]+root->val,a[1]+b[1]+abs(a[0]-b[0])};
    }
};
