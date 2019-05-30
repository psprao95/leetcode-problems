vector<vector<int>> res;
        if(!root)
        {
            return res;
        }
        vector<int> r;

        queue<TreeNode*> q;
        q.push(root);
        int n;
        int k=1;
        while(!q.empty())
        {
            n=q.size();
            r.clear();
            while(n)
            {
                TreeNode *temp=q.front();
                q.pop();
                r.push_back(temp->val);
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
            if(k%2==0)
            {
                reverse(r.begin(),r.end());
            }
            k++;
            res.push_back(r);
        }
        return res;

    }
};
