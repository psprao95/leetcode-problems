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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)
        {
            return NULL;
        }

        if(root->val==key)
        {
            if(!root->left)
            {
                return root->right;
            }

            if(!root->right)
            {
                return root->left;
            }

            TreeNode *succ=findSuccessor(root);
            root->val=succ->val;
            root->right=deleteNode(root->right,root->val);


            return root;
        }


        if(key>root->val)
        {
            root->right=deleteNode(root->right,key);
            return root;
        }

        root->left=deleteNode(root->left,key);
        return root;
    }

    TreeNode *findSuccessor(TreeNode *t)
    {
        t=t->right;
        while (t && t->left)
        {
            t=t->left;
        }
        return t;
    }
};
