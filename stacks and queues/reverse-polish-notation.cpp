class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        if(!n)
        {
            return 0;
        }
        int a,b;
        stack<int> st;
        for(string s:tokens)
        {
            if(s=="+")
            {
                    a=st.top();
                    st.pop();
                    b=st.top();
                    st.pop();
                    st.push(a+b);
            }
            else if(s=="-")
            {

                    a=st.top();
                    st.pop();
                    b=st.top();
                    st.pop();
                    st.push(b-a);
            }
            else if(s=="*")
            {


                    a=st.top();
                    st.pop();
                    b=st.top();
                    st.pop();
                st.push(a*b);
            }
            else if(s=="/")
            {

                    a=st.top();
                    st.pop();
                    b=st.top();
                    st.pop();
                a==0?st.push(0):st.push(b/a);
        }
             else
             {


                    st.push(stoi(s));
             }


        }
        return st.top();
    }
};
