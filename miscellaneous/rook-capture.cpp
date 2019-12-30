class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
     int a,b;

            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    if(board[i][j]=='R')
                    {a=i;
                    b=j;}
                }
            }

        set<char> s{'R','.'};
        int x,y,count=0;
        x=a;
        y=b;
        while(s.find(board[x][y])!=s.end() && x>0)
        {
            x=x-1;
        }
        count+=board[x][y]=='p'?1:0;

         x=a;
         y=b;
        while(s.find(board[x][y])!=s.end() && x<7)
        {
            x=x+1;
        }
        count+=board[x][y]=='p'?1:0;

         x=a;
         y=b;
        while(s.find(board[x][y])!=s.end() &&y>0)
        {
            y=y-1;
        }
        count+=board[x][y]=='p'?1:0;

        x=a;
        y=b;
        while(s.find(board[x][y])!=s.end()&&y<7)
        {
            y=y+1;
        }
        count+=board[x][y]=='p'?1:0;
        return count;
    }
};
