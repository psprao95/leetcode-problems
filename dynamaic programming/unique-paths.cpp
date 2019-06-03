class Solution {
    int n,m;
public:
    int uniquePaths(int m, int n) {
       this->m=m;
        this->n=n;
        return helper(1,1);

    }


    int helper(int i,int j)
    {
        if(i==n&&j==m)
        {

        }

        if(i==n)
        {
            return 1
                ;
        }

        if(j==m)
        {
            return 1;
        }

        return helper(i+1,j)+helper(i,j+1);
    }
};
