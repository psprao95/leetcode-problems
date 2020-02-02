class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        if(n==0){return {};}
        int m=mat[0].size();
        vector<vector<int>> p;
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<m;j++)
            {
                count+=mat[i][j]==1?1:0;
            }
            p.push_back({count,i});
        }
        sort(p.begin(),p.end());
        vector<int> res;
        int i=0;
        while(k)
        {
            k--;

            res.push_back(p[i][1]);

            i++;
        }
        return res;

    }
};
