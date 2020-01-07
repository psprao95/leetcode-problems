class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int r=0;
        if(n==0){return 0;}
        int m=matrix[0].size();
        vector<vector<int>> res(n+1,vector<int>(m+1,0));
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                if(matrix[i][j]=='1')
                {
                    res[i][j]=1+min(min(res[i][j+1],res[i+1][j]),res[i+1][j+1]);
                    r=max(r,(int)pow(res[i][j],2));
                }
            }
        }
        return r;

    }
};
