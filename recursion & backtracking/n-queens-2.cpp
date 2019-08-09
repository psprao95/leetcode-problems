class Solution {
    int count=0;
    int n;
public:
    int totalNQueens(int n) {
        this->n=n;
        vector<int> pos;
        helper(pos,1);
        return count;
    }

    void helper(vector<int> &pos,int r)
    {
        if(r==n+1)
        {
            count++;

        }
        bool safe=false;
        for(int j=1;j<=n;j++)
        {
            safe=true;
            for(int i=1;i<r;i++)
            {
                if(pos[i-1]==j || pos[i-1]==j-r+i ||pos[i-1]==j+r-i)
                {
                    safe=false;
                }
            }
            if(safe)
            {
                pos.push_back(j);
                helper(pos,r+1);
                pos.pop_back();
            }
        }
    }
};
