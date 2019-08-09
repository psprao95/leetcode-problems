class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.length();
        if(n==0||n==1)
        {
            return 0;
        }
        int arr[n+2];
        arr[n+1]=0;
        arr[n]=0;
        int res=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==')')
            {
                arr[i]=0;
            }
            else
            {

                if(i+1<n && s[i+1]==')')
                {
                    arr[i]=arr[i+2]+2;
                     res=max(res,arr[i]);
                    continue;
                }
                if((i+1<n && s[i+1]=='(') && (i+arr[i+1]+1<n && s[i+arr[i+1]+1]==')'))
                {
                        arr[i]= 2 + arr[i+1] + arr[i+arr[i+1]+2];
                       res=max(res,arr[i]);
                 continue;
                }

                else
                {
                    arr[i]=0;
                }
            }
        }
        return res;
    }
};
