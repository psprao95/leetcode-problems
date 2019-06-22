class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        if(!n)
        {
            return 0;
        }
        sort(intervals.begin(),intervals.end());
        int start=intervals[0][0];
        int count=0;
        int end=intervals[0][1];
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]<end)
            {
                end=min(intervals[i][1],end);
                count++;
            }
            else
            {
                start=intervals[i][0];
                end=intervals[i][1];
            }
        }
        return count;
    }
};
