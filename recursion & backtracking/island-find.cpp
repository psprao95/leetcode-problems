class Solution {
    int n, m;
    vector<vector<char>> arr;

public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        if(n == 0)
        {
            return 0;
        }

        int m=grid[0].size();
        this->arr=grid;
        this->n=n;
        this->m=m;
       int count=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]=='1')
                {
                    DFS(i,j);
                    count++;
                }
            }

        }
        return count;

    }


    void DFS(int i, int j)

    {
        if(i<0 || i==n || j<0 || j==m)
        {
            return;
        }

        if(arr[i][j]=='0')
        {
            return;
        }
        arr[i][j]='0';

            DFS(i-1,j);


            DFS(i+1,j);


            DFS(i,j-1);

            DFS(i,j+1);

    }


};
