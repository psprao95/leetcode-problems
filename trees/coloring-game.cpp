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
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        TreeNode *temp=getNode(root,x) ;
        int left=countNodes(temp->left);
        int right=countNodes(temp->right);
        return left>n/2 || right>n/2 || temp!=root&&1+left+right<n/2;
    }


    TreeNode *getNode(TreeNode *root,int val)
    {
        if(!root)
        {
            return NULL;
        }
        if(root->val==val)
        {
            return root;
        }
        TreeNode *left=getNode(root->left,val);
        if(left)
        {
            return left;
        }
        TreeNode *right=getNode(root->right,val);
        return right;

    }
    int countNodes(TreeNode * root)
    {
        if(!root)
        {
            return 0;
        }
        return 1+countNodes(root->left)+countNodes(root->right);

    }
};
