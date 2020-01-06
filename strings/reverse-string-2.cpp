class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size();
        int i=0,j,p,t;
        while(i<n)
        {
            t=n-i;
            if(t>=k)
            {
                j=i;
                p=i+k-1;
                while(j<p)
                {
                    swap(s[j],s[p]);
                    p--;
                    j++;
                }
                i=i+2*k;
            }

            else
            {
                j=i;
                p=n-1;
                while(j<p)
                {
                    swap(s[j],s[p]);
                    p--;
                    j++;
                }
                i=2*k+i;
            }

        }
        return s;
    }
};
