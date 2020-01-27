class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n=T.size();
        vector<int> res(n);
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty()&&T[i]>T[st.top()])
            {
                int p=st.top();
                st.pop();
                res[p]=i-p;
            }
            st.push(i);
        }
        return res;
    }
};
