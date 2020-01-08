class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int n=trust.size();
        vector<bool> isTrust(N,false);
        vector<int>tpeople(N,0);
        for(int i=0;i<n;i++)
        {
            tpeople[trust[i][1]-1]++;
            isTrust[trust[i][0]-1]=true;
        }

        for(int i=0;i<N;i++)
        {
            if(tpeople[i]==N-1 && isTrust[i]==false)
            {
                return i+1;
            }
        }
        return -1;
    }
};
