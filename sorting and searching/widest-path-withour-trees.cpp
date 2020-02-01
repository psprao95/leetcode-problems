class Solution {
public:
    int widestPath(vector<int>& X,vector<int> &Y) {
        sort(X.begin(),X.end());
        int n=X.size()
        int res=0;
        for(int i=1;i<n;i++)
        {
          res=max(res,X[i]-X[i-1]);
        }

        return res;
    }


};
