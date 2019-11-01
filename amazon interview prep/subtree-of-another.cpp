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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!s &&!t)
        {
            return true;
        }

        if(!s || !t)
        {
            return false;
        }
        bool f=false;
        if(s->val==t->val)
        {
            f=isSameTree(s,t);
        }
        return f || isSubtree(s->left,t)||isSubtree(s->right,t);
    }

    bool isSameTree(TreeNode *a, TreeNode *b)
    {
        if(!a &&!b)
        {
            return true;
        }
        if(!a||!b)
        {
            return false;
        }
        if(a->val!=b->val)
        {
            return false;
        }
        return isSameTree(a->left,b->left)&&isSameTree(a->right,b->right);
    }
};
