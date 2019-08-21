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
    int v=0;
public:
    TreeNode* convertBST(TreeNode* root) {
        if(!root)
        {
            return NULL;
        }

        root->right=convertBST(root->right);
        int temp=root->val;
        root->val=v+root->val;
        v=v+temp;


        root->left=convertBST(root->left);
        return root;
    }
};
