class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int n=S.size();
        int m=T.size();
        stack<char> r,s;

        for(int i=0;i<n;i++)
        {
            if(S[i]=='#' )
            {
                if(!r.empty())
                {
                r.pop();
                }
                continue;
            }
            r.push(S[i]);


        }
        for(int i=0;i<m;i++)
        {
            if(T[i]=='#')
            {
                if(!s.empty())
                {
                    s.pop();
                }
                continue;
            }
            s.push(T[i]);


        }

        return r==s;
    }
};
