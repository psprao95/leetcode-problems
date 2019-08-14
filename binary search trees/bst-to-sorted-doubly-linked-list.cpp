/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
*/
class Solution {
    Node *start=NULL;
    Node *prev=NULL;
public:
    Node* treeToDoublyList(Node* root) {
        inorder(root);
        if(start)
        {
            start->left=prev;
        prev->right=start;
        }
    return start;}

    void inorder(Node *root)
    {
        if(!root)
        {
            return;
        }
        inorder(root->left);
        if(!prev)

        {
            start=root;

        }
        else
        {
            prev->right=root;
            root->left=prev;
        }
        prev=root;
        inorder(root->right);

    }
};
