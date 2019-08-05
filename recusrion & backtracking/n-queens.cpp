class Solution {
    vector<vector<string>> res;

    int n;
  
public:
    vector<vector<string>> solveNQueens(int n) {

        this->n=n;

        vector<int> pos;
        vector<string> sol;
        helper(sol,pos,1);
        return res;
    }

    void helper(vector<string> &sol,vector<int> &pos,int r)
    {
        if(r==n+1)
        {
           res.push_back(sol);
            return;
        }

        bool safe=false;

        for(int j=1;j<=n;j++)
        {
            safe=true;
            for(int i=1;i<r;i++)
            {
                if(pos[i-1]==j || pos[i-1]==j+r-i ||pos[i-1]==j-r+i)
                {
                    safe=false;
                }
            }

            if(safe)
            {
                string row(n,'.');
                row[j-1]='Q';
                pos.push_back(j);
                sol.push_back(row);

                 helper(sol,pos,r+1);
                sol.pop_back();
                pos.pop_back();

            }

        }
    }
};
