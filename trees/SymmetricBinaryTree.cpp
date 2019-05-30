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
    bool isSymmetric(TreeNode* root) {
  return symmetric(root,root);
    }

    bool symmetric(TreeNode *leftNode, TreeNode * rightNode)
    {
        if(!leftNode && !rightNode)
        {
            return true;
        }
        if(!leftNode || !rightNode)
        {
            return false;
        }
        if(leftNode->val!=rightNode->val)
        {
            return false;
        }
        bool left = symmetric(leftNode->left,rightNode->right);
        bool right=symmetric(leftNode->right,rightNode->left);
        return left&&right;
    }
};
