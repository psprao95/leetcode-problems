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
    int findBottomLeftValue(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        queue<TreeNode *> q;
        q.push(root);
        int res;
        while(!q.empty())
        {
            int n=q.size();
            res=q.front()->val;
            while(n)
            {
                TreeNode *temp=q.front();
                q.pop();
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
                n--;
            }
        }
            return res;
    }
};
