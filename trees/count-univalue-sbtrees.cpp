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
    int count=0;
public:
    int countUnivalSubtrees(TreeNode* root) {
     bool p=helper(root);
        return count;

    }

    bool helper(TreeNode *root)
    {
       if(!root)
       {
           return true;
       }
        bool left=helper(root->left);
        bool right=helper(root->right);

        if(!left||!right)
        {
            return false;
        }
        if(root->left && root->left->val!=root->val)
        {
            return false;
        }
        if(root->right&&root->right->val!=root->val)
        {
            return false;
        }
        count++;
        return true;



    }
};
