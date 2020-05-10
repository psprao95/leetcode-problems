class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        vector<int> a(n,0);
        vector<int> b(n,0);
        int temp=0,temp2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                temp++;
                a[i]=temp;
            }
        }

        for(int j=n-1;j>=0;j--)
        {
            if(s[j]=='1')
            {
                temp2++;
                b[j]=temp2;
            }
        }
        int res=INT32_MIN;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]+b[i+1]>res)
            {
                res=a[i]+b[i+1];
            }
        }
        return res;
    }
};
