class Solution {
public:
    int uniquePaths(int m, int n) {

        int arr[n+1][m+1];
        arr[n][m]=1;
        for(int i=0;i<n;i++)
        {
            arr[i][m]=1;
        }
        for(int j=0;j<m;j++)
        {
            arr[n][j]=1;
        }
        for(int j=m-1;j>=1;j--)
        {
            for(int i=n-1;i>=1;i--)
            {
                arr[i][j]=arr[i][j+1]+arr[i+1][j];
            }
        }
        return arr[1][1];

    }
};
