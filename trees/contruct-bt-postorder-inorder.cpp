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
    vector<int> postorder;
    vector<int> inorder;
    int post;
    map<int,int> mp;
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        int m=postorder.size();
        if(!n || !m||n!=m)
        {
            return NULL;
        }

        this->inorder=inorder;
        this->postorder=postorder;
        for(int i=0;i<n;i++)
        {
            mp[inorder[i]]=i;
        }
        post=n-1;
        return helper(0,n-1);
    }

    TreeNode *helper(int i, int j)
    {
        if(i>j)
        {
            return NULL;
        }

        TreeNode *root=new TreeNode(postorder[post]);
        int index=mp.find(root->val)->second;
        post--;

        root->right=helper(index+1,j);
        root->left=helper(i,index-1);
        return root;

    }
};
