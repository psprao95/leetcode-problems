class Solution {
    vector<string> words;
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        this->words=wordDict;
        return helper(s);

    }

    bool helper(string s)
    {
        int n=s.size();
        if(n==0)
        {
            return true;
        }
        for(int i=1;i<=s.size();i++)
        {
            if(dictContains(s.substr(0,i))&&helper(s.substr(i,n-i)))
            {
                return true;
            }
        }
        return false;
    }

    bool dictContains(string p)
    {
        for(int i=0;i<words.size();i++)
        {
            if(words[i]==p)
            {
                return true;
            }
        }
        return false;
    }
};
