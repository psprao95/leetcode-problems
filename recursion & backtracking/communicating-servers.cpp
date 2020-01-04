class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n=grid.size();
        if(n==0){return 0;}
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)

                    {
                        count+=dfs(i,j+1,0,1,n,m,grid)||
                        dfs(i,j-1,0,-1,n,m,grid)||
                        dfs(i+1,j,1,0,n,m,grid)||
                        dfs(i-1,j,-1,0,n,m,grid);
                    }

            }
        }
        return count;
    }

    int dfs(int i,int j, int x ,int y,int n, int m, vector<vector<int>> &grid)

    {
        if(i<0 ||j<0 || i==n || j==m)
        {
            return false;
        }
        if(grid[i][j]==1)
        {
            return true;
        }
        return dfs(i+x,j+y,x,y,n,m,grid);
    }
};
