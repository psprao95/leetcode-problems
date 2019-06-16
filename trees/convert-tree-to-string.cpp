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
    string res="";
public:
    string tree2str(TreeNode* t) {
        helper(t);

        return res;

    }

    void helper(TreeNode *root)
    {
        if(!root)
        {
            return;
        }
        res+=to_string(root->val);
        if(!root->left && !root->right)
        {
            return;
        }

        if(root->right && root->left)
        {
            res+="(";
            helper(root->left);
            res+=")";
            res+="(";
            helper(root->right);
            res+=")";
        }

        if(!root->right)
        {
            res+="(";
            helper(root->left);
            res+=")";
        }

        if(!root->left)
        {
            res+="()(";
            helper(root->right);
            res+=")";
        }
    }
};
