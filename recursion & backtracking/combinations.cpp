class Solution {vector<vector<int>> res;
                vector<int> r;
                int n,p,k;

public:
    vector<vector<int>> combine(int n, int k) {
        this->n=n;
        this->k=k;
        vector<int> r;
        this->p=n-k+1;
        for(int i=1;i<=p;i++)
        {
            helper(i,k);
        }
        return res;
    }

    void helper(int a,int b)
    {

        r.push_back(a);
        if(b==1)
        {
            res.push_back(r);
            r.pop_back();
            return;
        }
        for(int i=a+1; i<=n;i++)
        {
            helper(i,b-1);

        }
        r.pop_back();
    }
};
