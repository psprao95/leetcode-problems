class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        int n=intervals.size();
        if(n==0)
        {
            return res;
        }
        sort(intervals.begin(),intervals.end());

        int start=intervals[0][0];
        int end=intervals[0][1];

        for(int i=0;i<n;i++)
        {
            if(intervals[i][0]<=end)
            {
                end=max(intervals[i][1],end);
            }
            else
            {
                res.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
        }
        res.push_back({start,end});
        return res;

    }
};
