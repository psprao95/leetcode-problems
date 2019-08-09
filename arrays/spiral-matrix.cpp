class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int n=matrix.size();
        if(n==0)
        {
            return res;
        }
        int m=matrix[0].size();
        n--;
        m--;
        int k=0,l=0;

        while(l<=n && k<=m)
        {

            // first row
            for(int j=k;j<=m;j++)
            {
                res.push_back(matrix[l][j]);
            }
            l++;

            if(l>n)
            {
                break;
            }

            // last column
            for(int i=l;i<=n;i++)
            {
                res.push_back(matrix[i][m]);
            }
            m--;


            if(k>m)
            {
                break;
            }

            // last row
            for(int j=m;j>=k;j--)
            {
                res.push_back(matrix[n][j]);
            }
            n--;



            // first column
                for(int i=n;i>=l;i--)
                {
                res.push_back(matrix[i][k]);
                }
                k++;



        }
        return res;


    }
};
