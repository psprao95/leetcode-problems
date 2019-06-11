class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        int n=S.size();
        char s=S[0];
        int count=1;
        int start=0;
        vector<vector<int>> res;
        for(int i=1;i<n;i++)
        {
            if(S[i]==s)
            {
                count++;
            }
            else
            {
                if(count>2)
                {
                    res.push_back({start,i-1});
                }
                start=i;
                count=1;
                s=S[i];
            }
        }
        if(count>2)
        {
            res.push_back({start,n-1});}return res;

    }
};
