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
    double res;
public:
    double maximumAverageSubtree(TreeNode* root) {
        res=INT32_MIN;
        pair<int,int> p=helper(root);
        return res;
    }

    pair<int,int> helper(TreeNode *root)
    {
        if(!root)
        {
            return make_pair(0,0);
        }
        pair<int,int> left=helper(root->left);
        pair<int,int> right=helper(root->right);
        double sum=left.first+right.first+root->val;
        int n=1+left.second+right.second;
        if(sum/n>res)
        {
            res=sum/n;
        }
        return make_pair(sum,n);

    }
};
