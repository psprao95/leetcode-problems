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
    vector<int> r;
public:
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        int n=r.size();
        if(n==0)
        {
            return false;
        }
        int i=0,j=n-1;
        while(i<j)
        {
            if(r[i]+r[j]==k)
            {
                return true;
            }
            if(r[i]+r[j]>k)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return false;
    }

    void inorder(TreeNode *root)
    {
        if(!root)
        {
            return;
        }
        inorder(root->left);
        r.push_back(root->val);
        inorder(root->right);
        return;
    }
};
