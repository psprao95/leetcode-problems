class Solution {
    vector<string> words;
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        if(n==0)
        {
            return true;
        }
        this->words=wordDict;
        vector<bool>arr(n+1);
        for(int i=0;i<n;i++)
        {
            arr[i]=false;
        }
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==false && dictContains(s.substr(0,i)))
            {
                arr[i]=true;
            }
            if(arr[i]==true)
            {
                for(int j=i+1;j<=n;j++)
                {
                    if(!arr[j] && dictContains(s.substr(i,j-i)))
                    {
                        arr[j]=true;
                    }


                }

            }
        }
        return arr[n];

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
