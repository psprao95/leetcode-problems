/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class FindElements {
    TreeNode *p=NULL;
public:
    FindElements(TreeNode* root) {
        if(!root){return;}
        root->val=0;
        helper(root->left,0,true);
        helper(root->right,0,false);
        p=root;
        //helper
    }

    void helper(TreeNode *root,int p,bool left)
    {
        if(!root){return;}
        if(left){root->val=2*p+1;}
        else
        {
            root->val=2*p+2;
        }
        helper(root->left,root->val,true);
        helper(root->right,root->val,false);
    }

    bool find(int target) {
        return dfs(p,target);
    }

    bool dfs(TreeNode *root,int t)
    {
        if(!root){return false;}
        if(root->val==t){return true;}
        return dfs(root->left,t)||dfs(root->right,t);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
