class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        if(!n)
        {
            return 0;
        }
        sort(points.begin(),points.end());
        int start=points[0][0];
        int end=points[0][1];
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(points[i][0]>=start&&points[i][0]<=end)
            {
                end=min(end,points[i][1]);
            }
            else
            {
                count++;
                end=points[i][1];
                start=points[i][0];
            }
        }
        return count;
    }
};
