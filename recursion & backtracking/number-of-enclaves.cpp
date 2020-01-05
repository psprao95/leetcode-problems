class Solution {
public:
    int numEnclaves(vector<vector<int>>& A) {
        int n=A.size();
        if(n==0)
            {
                return 0;
            }
            int m=A[0].size();
        int count=0;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(i*j==0 || i==n-1 ||j==m-1)
                    {
                        dfs(i,j,A,n,m);

                    }
                }
            }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                count+=A[i][j];
            }
        }
        return count;
    }

    void dfs(int i,int j, vector<vector<int>> &A,int n,int m)
    {

        if(i<0 || j<0 || i==n||j==m || A[i][j]==0)
        {
            return;
        }

        A[i][j]=0;
             dfs(i+1,j,A,n,m);
                dfs(i-1,j,A,n,m) ;
                dfs(i,j+1,A,n,m) ;
                dfs(i,j-1,A,n,m) ;


    }
};
