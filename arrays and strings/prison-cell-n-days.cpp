class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        N=N%14;
        if(N==0)
        {
            N=14;
        }
        vector<int> cells2(8,0);
        while(N)
        {
            N--;
           for(int i=1;i<7;i++)
           {
               cells2[i]=cells[i-1]==cells[i+1]?1:0;
           }
            cells=cells2;

        }
        return cells;
    }
};
