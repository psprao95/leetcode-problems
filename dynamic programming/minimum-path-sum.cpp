class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        if(!n){return 0;}
        int m=grid[0].size();
        vector<vector<int>> res(n,vector<int>(m));
        res[n-1][m-1]=grid[n-1][m-1];
        int sum=grid[n-1][m-1];
        for(int i=n-2;i>=0;i--)
        {

            sum+=grid[i][m-1];
            res[i][m-1]=sum;
        }
        sum=grid[n-1][m-1];
        for(int j=m-2;j>=0;j--)
        {

            sum+=grid[n-1][j];
            res[n-1][j]=sum;
        }
        for(int i=n-2;i>=0;i--)
        {
            for(int j=m-2;j>=0;j--)
            {
                res[i][j]=grid[i][j]+min(res[i+1][j],res[i][j+1]);
            }
        }
        return res[0][0];
    }

    int dfs(vector<vector<int>> &grid,int i,int j,int n,int m)
    {
        if(i==n-1&&j==m-1){return grid[i][j];}
        if(i==n-1)
        {
            return grid[i][j]+dfs(grid,i,j+1,n,m);
        }
        if(j==m-1){return grid[i][j]+dfs(grid,i+1,j,n,m);}

        int a=dfs(grid,i+1,j,n,m);
        int b=dfs(grid,i,j+1,n,m);

        return min(a,b)+grid[i][j];
    }
};
