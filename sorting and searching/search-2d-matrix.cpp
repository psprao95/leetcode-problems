class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int r=matrix.size();

        if(r==0)
        {
            return false;
        }
        int c=matrix[0].size();
        if(c==0)
        {
            return false;
        }
        int row=0;
        for(int i=0;i<r;i++)
        {
            if(target == matrix[i][0])
            {
                return true;
            }
            if(target < matrix[i][0])
            {
                if(i==0)
                {
                    return false;
                }


                row=i-1;
                break;
            }
            else
            {
                row=i;
            }
        }


        for(int j=0;j<c;j++)
        {
            if(matrix[row][j]==target)
            {
                return true;
            }
        }
        return false;


    }
};
