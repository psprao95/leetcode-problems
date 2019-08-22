class Solution {
    int n,m;
    vector<vector<int>>arr;
    string cur="";
public:
    int numDistinctIslands(vector<vector<int>>& grid) {
        int n=grid.size();
        if(!n)
        {
            return 0;
        }
        int m=grid[0].size();

        this->arr=grid;
        this->m=m;
        this->n=n;
        int count=0;

        unordered_set<string> islands;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]==1)
                {
                    cur="";
                    dfs(i,j,"o");
                    if(!islands.count(cur))
                    {
                        islands.insert(cur);
                        count++;
                    }

                }
            }
        }

        return count;
    }

    void dfs(int i,int j,string move)
    {
        if(i==n ||i<0||j==m||j<0)
        {
            cur+="f";
            return;
        }
        if(arr[i][j]==0)
        {
            cur+="f";
            return ;
        }
        arr[i][j]=0;

        cur+=move;
        dfs(i-1,j,"u");
        dfs(i+1,j,"d");
        dfs(i,j-1,"l");
        dfs(i,j+1,"r");

    }
};
