// Merge intevrals.approach
class Solution {
public:
    vector<vector<int>> employeeFreeTime(vector<vector<vector<int>>>& schedule) {
      int n=schedule.size();
        vector<vector<int>> s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<schedule[i].size();j++)
            {
                s.push_back(schedule[i][j]);
            }
        }

        sort(s.begin(),s.end());
        vector<vector<int>> res;
        int r=s.size();

        int end=s[0][1];
        for(int i=1;i<s.size();i++)
        {
            if(s[i][0]<=end)
            {
                end=max(end,s[i][1]);
            }
            else
            {
                res.push_back({end,s[i][0]});
                end=s[i][1];
            }
        }
        return res;

    }
};


//Approach 2 :
 class Solution {
public:
    vector<vector<int>> employeeFreeTime(vector<vector<vector<int>>>& schedule) {
      int n=schedule.size();
        vector<vector<int>> res;
        vector<int> begin;
        vector<int> end;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<schedule[i].size();j++)
            {
                begin.push_back(schedule[i][j][0]);
                end.push_back(schedule[i][j][1]);
            }
        }

        sort(begin.begin(),begin.end());
        sort(end.begin(),end.end());



        for(int i=0;i<begin.size()-1;i++)
        {
            if(end[i]<begin[i+1])
            {

               res.push_back({end[i],begin[i+1]});

            }
        }
        return res;

    }
};
