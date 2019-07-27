struct Node
{
   Node *left;
   Node *right;
   int data;
   int count;
   Node(int v,int c): left(NULL),right(NULL),data(v),count(c){}
};


class KthLargest {
   private:
  Node *root=NULL;
   int k;

   Node * insertNode(Node *root,int val)
   {
       if(!root)
       {
           return new Node(val,1);
       }
        if(val < root->data)
       {
           root->left=insertNode(root->left,val);


           }
           else
           {
               root->right=insertNode(root->right,val);
           }
       root->count++;
       return root;
   }


   int searchKthLargest(Node *root,int k)
   {
       if(!root)
       {
           return -1;
       }
       int m=root->right?(root->right)->count:0;
       if(k==m+1)
       {
           return root->data;
       }
       if(k<=m)
       {
               return searchKthLargest(root->right,k);
       }
       else
                         {

           return searchKthLargest(root->left,k-m-1);
                         }
   }
    public:
   KthLargest(int k, vector<int>& nums) {
       for(int i=0;i<nums.size();i++)
       {
           root=insertNode(root,nums[i]);
       }
       this->k=k;
   }

   int add(int val) {
       root=insertNode(root,val);
       return searchKthLargest(root,k);
   }
};

/**
* Your KthLargest object will be instantiated and called as such:
* KthLargest* obj = new KthLargest(k, nums);
* int param_1 = obj->add(val);
*/
