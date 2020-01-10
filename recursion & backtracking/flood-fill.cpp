class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n=image.size();
        if(n==0){return image;}
        int m=image[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        dfs(sr,sc,image,n,m,image[sr][sc],newColor,visited);
        return image;
    }

    void dfs(int i,int j,vector<vector<int>> &res,int n,int m,int val,int color,vector<vector<bool>>& visited)
    {
        if(i<0 || i>n-1 || j<0 || j>m-1 || res[i][j]!=val || visited[i][j]==true)
        {
            return;
        }

            res[i][j]=color;
        visited[i][j]=true;

        dfs(i,j+1,res,n,m,val,color,visited);
         dfs(i,j-1,res,n,m,val,color,visited);
         dfs(i+1,j,res,n,m,val,color,visited);
         dfs(i-1,j,res,n,m,val,color,visited);
    }
};
