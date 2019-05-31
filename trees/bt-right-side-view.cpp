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
    vector<int> res;
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(!root)
        {
            return res;
        }
        queue<TreeNode*> q;
        q.push(root);
        int temp,val,size;
        while(!q.empty())
        {

            TreeNode *p=q.front();
            res.push_back(p->val);
            size=q.size();
            while(size!=0)
            {
                TreeNode *t=q.front();
                q.pop();

                if(t->right)
                {
                    q.push(t->right);
                }
                if(t->left)
                {
                    q.push(t->left);

                }
                size--;
            }

        }
        return res;
    }

};
