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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode *>q;
        q.push(root);
        int sum;
        while(!q.empty())
        {
            int n=q.size();
            sum=0;
            for(int i=0;i<n;i++)
            {
                //sum+=
                TreeNode *p=q.front();
                sum+=p->val;
                q.pop();
                if(p->left){q.push(p->left);}
                if(p->right){q.push(p->right);}
            }
        }
        return sum;
    }
};
