class Solution {

    int m,n;
    vector<vector<char>> arr;
    string word;



public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m;
        if(n==0)
        {
            return false;
        }
            m=board[0].size();

        this->m=m;
        this->n=n;
        this->arr=board;
        this->word=word;




        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(search(i,j,0)==true)
                {
                    return true;
                }
            }
        }
        return false;

    }


    bool search(int i,int j,int k)
    {
        if(i<0 || i==n || j<0 || j==m)
        {
            return false;
        }



        if(word[k]!=arr[i][j] || arr[i][j]==' ')
        {

            return false;
        }

        if(k==word.size()-1)
        {
            return true;
        }

        char c=arr[i][j];
        arr[i][j]=' ';
        bool f= search(i-1,j,k+1) || search(i+1,j,k+1) ||  search(i,j-1,k+1) || search(i,j+1,k+1);

        arr[i][j]=c;
        return f;



    }



};
