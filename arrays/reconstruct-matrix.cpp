class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        int h=colsum.size();

        vector<vector<int>> empty;
        vector< vector<int>> res(2,vector<int>(h,0));


        for(int i=0;i<h;i++)
        {
            if(colsum[i]==2)
            {
                res[0][i]=1;
                res[1][i]=1;
                upper--;
                lower--;
            }
            else if(colsum[i]==1)
            {
                if(lower<upper)
                {
                    res[0][i]=1;

                    upper--;
                }
                else
                {

                    res[1][i]=1;
                    lower--;
                }
            }

        }
        if(upper!=0 || lower!=0)
        {
            return empty;
        }
        return res;
    }
};
