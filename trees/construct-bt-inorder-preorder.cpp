/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

#include<map>
class Solution {
    private:
    vector<int> preorder;
    vector<int> inorder;
   map<int,int> mp;
    int pre=0;

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        int m=inorder.size();
        if(n==0 || m==0 || n!=m)
        {
            return NULL;
        }

        for(int i=0;i<m;i++)
        {

            mp[inorder[i]]=i;
        }
        this->preorder=preorder;
        this->inorder=inorder;

        return helper(0,n-1);

    }

    TreeNode *helper(int low,int high)
    {

        if(low>high)
        {

            return NULL;
        }




        TreeNode *root=new TreeNode(preorder[pre]);
        int index=mp.find(root->val)->second;
        pre++;
        root->left=helper(low,index-1);
        root->right=helper(index+1,high);
        return root;
    }
};
