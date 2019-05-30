/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 // Approach using BFS

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> queue;
        if(root==NULL)
        {
            return res;
        }
        queue.push(root);
        vector<int> r;
        while(!queue.empty())
        {
            int n=queue.size();
            for(int i=0;i<n;i++)
            {
                TreeNode *temp=queue.front();
                queue.pop();
                r.push_back(temp->val);
                if(temp->left)
                {
                    queue.push(temp->left);
                }
                if(temp->right)
                {
                    queue.push(temp->right);
                  }
            }
            res.push_back(r);
            r.clear();
        }
        return res;
    }
};
