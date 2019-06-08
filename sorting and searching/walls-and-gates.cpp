class Solution {
public:
    void wallsAndGates(vector<vector<int>>& rooms) {
        int n=rooms.size();
        int m;
        if(n)
        {
            m=rooms[0].size();
        }
        else
        {
m=0;}
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!rooms[i][j])
                {
                    dfs(rooms,i,j,-1);
                }
            }
        }
    }

    void dfs(vector<vector<int>>&rooms,int i, int j, int d)
    {
        int n=rooms.size();int m=rooms[0].size();
        if(i==n||i<0||j<0||j==m||rooms[i][j]<d+1)
        {
            return;
        }
        rooms[i][j]=d+1;
        dfs(rooms,i+1,j,d+1);
        dfs(rooms,i-1,j,d+1);
        dfs(rooms,i,j+1,d+1);
        dfs(rooms,i,j-1,d+1);
    }
};
