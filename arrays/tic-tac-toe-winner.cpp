class Solution {
   private: vector<vector<int>> board;
public:
    string tictactoe(vector<vector<int>>& moves) {
        int n=moves.size();
        if(n<=2)
        {
            return "Pending";
        }

        map<int,string> m;
        m[1]= "A";
        m[2]="B";

        vector<vector<int>> board(3, vector<int> (3));

        for(int i=0;i<n;i++)
        {
            if(i%2==0){board[moves[i][0]][moves[i][1]]=1;}
            else{board[moves[i][0]][moves[i][1]]=2;}
        }

        this->board=board;
        int i=moves[n-1][0];
        int j=moves[n-1][1];
        int k=board[i][j];
        bool g=
            (dfs(i+1,j+1,k)+dfs(i+2,j+2,k)+
            dfs(i-1,j-1,k)+dfs(i-2,j-2,k)>=2)
            || (dfs(i+1,j,k) + dfs(i+2,j,k) + dfs(i-1,j,k)+dfs(i-2,j,k)>=2)
            || (dfs(i,j+1,k) + dfs(i,j+2 ,k)+ dfs(i,j-1,k)+dfs(i,j-2,k)>=2)
            || (dfs(i-1,j+1,k)+dfs(i-2,j+2,k)+
            dfs(i+1,j-1,k)+dfs(i+2,j-2,k)>=2);

        if(g){return m[k];}
        if(n==9)
        {
            return "Draw";
        }
        return "Pending";
    }

    int dfs(int i, int j, int val)
    {
        if(i<0 || j<0 || i>2 || j>2)
        {
            return 0;
        }

        return board[i][j]==val?1:0;
    }



};
