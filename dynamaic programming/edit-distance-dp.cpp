class Solution {
    string words1;
    string words2;
public:
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();

        if(m==0)
        {
            return n;
        }

        if(n==0)
        {
            return m;
        }

        int arr[m+1][n+1];

        arr[0][0]=0;
        for(int i=1;i<m+1;i++)
        {
            arr[i][0]=i;
        }

        for(int j=1;j<n+1;j++)
        {
            arr[0][j]=j;
        }

        int res;
        for(int j=1;j< n+1;j++)
        {
            for(int i=1;i<m+1;i++)
            {
                res=min(arr[i-1][j]+1,arr[i][j-1]+1);
                if(word1[i-1]==word2[j-1])
                {
                    res=min(res,arr[i-1][j-1]);
                }
                else
                {
                    res=min(res,arr[i-1][j-1]+1);
                }
                arr[i][j]=res;
            }
        }
        return arr[m][n];

    }


};
