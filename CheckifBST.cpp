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
    bool isValidBST(TreeNode* root) {
        return check(root,NULL,NULL);

    }

    bool check(TreeNode*root,TreeNode * minNode, TreeNode * maxNode)
    {
        if(!root)
        {
            return true;
        }
        if(minNode && root->val<=minNode->val)
        {
            return false;
        }
        if(maxNode && root->val>=maxNode->val)
        {
            return false;
        }
        return check(root->left,minNode,root)&&check(root->right,root,maxNode);
    }
};
