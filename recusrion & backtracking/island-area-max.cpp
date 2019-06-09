class Solution {
    int count=0;
    int n,m;
    vector<vector<int>> arr;
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        if(n==0)
        {
            return 0;
        }
        int m=grid[0].size();
        this->m=m;
        this->n=n;
        this->arr=grid;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j])
                {
                    count=max(count,dfs(i,j));
                }
            }
        }
        return count;

    }

    int dfs(int i,int j)
    {
        if(i<0||i==n||j<0||j==m)
        {
            return 0;
        }
        if(arr[i][j]==0)
        {
            return 0;}

        arr[i][j]=0;
        return 1+dfs(i+1,j)+dfs(i-1,j)+dfs(i,j-1)+dfs(i,j+1);
    }
};
