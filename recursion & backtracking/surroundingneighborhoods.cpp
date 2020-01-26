class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        if(n==0){return ;}
        int m=board[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        for(int i=0;i<n;i++)
        {
            dfs(board,i,0,n,m);
            dfs(board,i,m-1,n,m);
        }
        for(int j=0;j<m;j++)
        {
            dfs(board,0,j,n,m);dfs(board,n-1,j,n,m);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {

                 if(board[i][j]=='O')
                 {
                     board[i][j]='X';
                 }
                if(board[i][j]=='1')
                {
                    board[i][j]='O';
                }
            }
        }


        return;
    }

    void dfs(vector<vector<char>> &grid,int i,int j,int n,int m)
    {
        if(i==n ||j==m ||j<0 ||i<0||grid[i][j]=='X'||grid[i][j]=='1')
        {
            return ;
        }
        grid[i][j]='1';
        dfs(grid,i-1,j,n,m);
            dfs(grid,i+1,j,n,m);
        dfs(grid,i,j-1,n,m);
                dfs(grid,i,j+1,n,m);
    }

    bool c(vector<vector<char>> &grid,int i,int j,int n,int m)
    {
        return (i==0||j==0||i==n-1||j==m-1)&&grid[i][j]=='O';
    }
};
