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
    int sumEvenGrandparent(TreeNode* root) {
        return helper(root,1,1);
    }

    int helper(TreeNode *root, int a,int  b)
    {
        if(!root)
        {
            return 0;
        }
        int sum=0;
        if(b%2==0)
        {
            sum+=root->val;

        }
        return sum+helper(root->left,root->val,a)+helper(root->right,root->val,a);
    }
};
