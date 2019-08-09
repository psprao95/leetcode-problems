class Solution {
    string p;
    string s;
public:
    bool isMatch(string s, string p) {

        int n=s.size();
        int m=p.size();
        if(m==0)
        {
            return n==0;
        }
        bool arr[n+1][m+1];
        arr[n][m]=true;
        for(int i=0;i<n;i++)
        {
            arr[i][m]=false;
        }
        for(int j=m-1;j>=0;j--)
        {
            if(p[j]=='*')
            {
                arr[n][j]=arr[n][j+1];
            }
            else
            {
                arr[n][j]=false;
            }
        }


        for(int j=m-1;j>=0;j--)
        {
            for(int i=n-1;i>=0;i--)
            {
                if(p[j]=='?')
                   {
                    arr[i][j]=arr[i+1][j+1];
                   }

                else if(p[j]=='*')
                {
                    if(j==m-1)
                    {
                        arr[i][j]=true;
                    }
                    else
                    {
                        bool flag=false;
                        for(int k=i;k<n;k++)
                        {
                             if(arr[k][j+1]==true)
                            {
                                arr[i][j]=true;
                                flag=true;
                            }

                        }
                        if(!flag)
                        {
                            arr[i][j]=false;
                        }
                    }
                }

                else if(s[i]!=p[j])
                {
                    arr[i][j]=false;
                }

                else
                {
                    arr[i][j]=arr[i+1][j+1];
                }
            }

        }

        return arr[0][0];

    }


};
