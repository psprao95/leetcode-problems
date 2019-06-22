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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        queue<TreeNode*> queue;
        if(root==NULL)
        {
            return res;
        }
        queue.push(root);
        double d;
        while(!queue.empty())
        {
            int n=queue.size();
            d=0;
            for(int i=0;i<n;i++)
            {
                TreeNode *temp=queue.front();
                queue.pop();
                d+=temp->val;
                if(temp->left)
                {
                    queue.push(temp->left);
                }
                if(temp->right)
                {
                    queue.push(temp->right);
                  }
            }
            res.push_back(d/n);

        }
        return res;
    }
};
