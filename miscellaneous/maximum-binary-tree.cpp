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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }

    TreeNode *helper(vector<int>&nums,int i,int j)
    {
        if(i>j)
        {
            return NULL;
        }
        int f,g=INT32_MIN;
        for(int k=i;k<=j;k++)
        {
            if(nums[k]>g){
            f=k;
                g=nums[k];}

        }
        TreeNode *root=new TreeNode(nums[f]);
        root->left=helper(nums,i,f-1);
        root->right=helper(nums,f+1,j);
        return root;
    }
};
