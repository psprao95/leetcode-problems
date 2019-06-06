class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {



        int n=intervals.size();
        if(n<=1)
        {
            return true;
        }
        sort(intervals.begin(),intervals.end());



        for(int i=0;i<n-1;i++)
        {
            if(intervals[i+1][0]<intervals[i][1])
            {
                return false;
            }

        }

        return true;



    }
};
