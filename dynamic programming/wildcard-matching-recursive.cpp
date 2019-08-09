class Solution {
    string p;
    string s;
public:
    bool isMatch(string s, string p) {

        this->s=s;
        this->p=p;
        return dfs(0,0);

    }

    int dfs(int i,int j)
    {
       if(j==p.size())
        {
            return i==s.size();
        }
        if(i==s.size())
        {
            if(p[j]=='*')
            {
                return dfs(i,j+1);
            }
            return false;
        }

        if(p[j]=='?')
        {
            return dfs(i+1,j+1);
        }

        if(p[j]=='*')
        {
            if(j==p.size()-1)
            {
                return true;
            }
            for(int k=i;k<s.size();k++)
            {
                if(dfs(k,j+1))
                {
                    return true;
                }

            }
            return false;

        }

        if(p[j]!=s[i])
        {
            return false;
        }
        return dfs(i+1,j+1);
    }
};
