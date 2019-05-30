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
   map<int,int> m;
    int pre;

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0)
        {
            return NULL;
        }
        this->preorder=preorder;
        this->inorder=inorder;

        for(int i=0;i<inorder.size();i++)
        {
            m[inorder[i]]=i;
        }
        pre=0;
        return helper(0,inorder.size()-1);

    }

    TreeNode *helper(int low,int high)
    {

        if(low>high)
        {
            return NULL;
        }



        int root_val=preorder[pre];
        TreeNode *root=new TreeNode(root_val);
        int index=m.find(root_val)->second;
        pre++;
        root->left=helper(low,index-1);
        root->right=helper(index+1,high);
        return root;
    }
};
