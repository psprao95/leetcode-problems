class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<vector<int>> res;
        vector<pair<int,int>> temp;
        int n=points.size();

        int x,y;
        for(int i=0;i<n;i++)
        {
            x=points[i][0];
            y=points[i][1];
            temp.push_back({pow(x,2)+pow(y,2),i});
        }
        sort(temp.begin(),temp.end());
        int j=0;
        while(K)
        {
            K--;
            res.push_back(points[temp[j].second]);
            j++;

        }
        return res;
    }
};
