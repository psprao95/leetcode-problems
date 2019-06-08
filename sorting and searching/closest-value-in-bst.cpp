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

    int result;
public:
    int closestValue(TreeNode* root, double target) {

        result=root->val;

        helper(root,target);
        return result;

    }

    void helper(TreeNode *root, double target)
    {
        if(!root)
        {
            return;
        }
        if(abs(root->val-target)<abs(result-target))
        {
            result=root->val;

        }

        if(target<root->val)
        {

         helper(root->left,target);
        }

         else
         {

               helper(root->right,target);
         }
    }
};
