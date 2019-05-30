class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.length();
        if(n==0||n==1)
        {
            return 0;
        }
        int res=0;
        int last=-1;
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else
            {
                if(st.empty())
                {
                    last=i;
                }
                else
                {
                    st.pop();
                    if(st.empty())
                    {
                        res=max(res,i-last);
                    }
                    else
                    {
                        res=max(res,i-st.top());
                    }
                }
            }
        }
        return res;

    }
};
