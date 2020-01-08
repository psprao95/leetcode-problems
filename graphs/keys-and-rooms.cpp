class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> visited(n,false);
        dfs(0,rooms,visited);
        for(bool f:visited)
        {
            if(f==false)
            {
                return false;
            }
        }
        return true;
    }

    void dfs(int i,vector<vector<int>> &rooms, vector<bool> &visited)
    {
        if(visited[i]==true)
        {
            return;
        }
        visited[i]=true;
        for(int j=0;j<rooms[i].size();j++)
        {
            dfs(rooms[i][j],rooms,visited);
        }
    }
};
