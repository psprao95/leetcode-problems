class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        int n=M.size();
        if(n==0){return 0;}
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(M[i][j]==1)
                {
                    count++;
                    dfs(i,j,M,n);
                }
            }
        }
        return count;
    }

    void dfs(int i,int j,vector<vector<int>> &A,int n)
    {
        if(i<0 || j<0 || i==n || j==n || A[i][j]==0)
        {
            return;
        }
        A[i][j]=0;
        for(int k=0;k<n;k++)
        {
            dfs(j,k,A,n);
        }
    }
};
