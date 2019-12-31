class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> res;
          res.push_back(S);
        int n=S.size();
        for(int i=0;i<n;i++)
        {
            dfs(res,i,S);
        }
        return res;
    }

     void dfs(vector<string> &res,int i,string &S)
    {
        if(isalpha(S[i])){
            if(islower(S[i]))
            {
                S[i]=toupper(S[i]);
            }
            else
            {
                S[i]=tolower(S[i]);
            }
            res.push_back(S);
            for(int j=i+1;j<S.size();j++)
        {
            dfs(res,j,S);
        }
            if(islower(S[i]))
            {
                S[i]=toupper(S[i]);
            }
            else
            {
                S[i]=tolower(S[i]);
            }

        }


    }
};
