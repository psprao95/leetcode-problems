class Solution {
public:
    vector<string> findStrobogrammatic(int n) {
        return helper(n,n);
    }

    vector<string> helper(int n,int p)
    {
        if(n==0)
        {
            return {""};
        }
        if(n==1)
        {
            return {"0","1","8"};
        }
        vector<string> temp=helper(n-2,p);
        vector<string> r;
        for(string t:temp)
        {
            if(n!=p)
            {
                r.push_back("0"+t+"0");
            }
            r.push_back("8"+t+"8");
            r.push_back("1"+t+"1");
            r.push_back("6"+t+"9");
            r.push_back("9"+t+"6");
        }
            return r;
    }
};
