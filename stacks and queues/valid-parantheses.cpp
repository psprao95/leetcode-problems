class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {

            char t=s[i];
            switch(t)
            {
                case '{':
                    st.push(t);
                    break;


                case '(':
                    st.push(t);
                    break;

                case '[':
                    st.push(t);
                    break;

                 case ')':
                    if(st.empty()||st.top()!='(')
                    {
                       return false;
                    }
                     st.pop();
                    break;


                case '}':

                    if(st.empty() ||st.top()!='{')
                    {
                        return false;
                    }
                    st.pop();
                    break;

                case ']':
                    if(st.empty() ||st.top()!='[')
                    {
                        return false;
                    }
                    st.pop();
                    break;


            }
        }
            if(!st.empty())
            {
                return false;
            }
            else
            {
                return true;
            }



    }
};
