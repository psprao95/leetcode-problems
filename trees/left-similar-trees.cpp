/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {vector<int> r;
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a;
        vector<int> b;
        helper(root1,a);


        helper(root2,b);




        return a==b;
    }

    void helper(TreeNode *root,vector<int> &v)
    {
        if(!root)
        {
            return;
        }
        if(!root->left && !root->right)
        {
           v.push_back(root->val);

        }
        helper(root->left,v);
        helper(root->right,v);
    }
};
