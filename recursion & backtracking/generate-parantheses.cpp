

class Solution {
    vector<string> res;
public:
    vector<string> generateParenthesis(int n) {
        helper("",0,0,n);
        return res;

    }


    void helper(string cur,int open, int close, int m)
    {
        if(cur.length()==2*m)
        {
            res.push_back(cur);
            return;
        }

        if(open<m)
        {
            helper(cur+"(",open+1,close,m);
        }
        if(close<open)
        {
            helper(cur+")",open,close+1,m);
        }
        return;
    }
};
