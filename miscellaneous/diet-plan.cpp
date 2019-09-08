class Solution {
public:
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
        int res,sum=0;
        queue<int> q;
        int i=0;
        int n=calories.size();
        while(k)
        {
            k--;
            q.push(calories[i]);
            sum+=calories[i];
            i++;

        }

        res+=helper(sum,lower,upper);
        for(int j=i;j<n;j++)
        {
            sum+=calories[j];
            sum-=q.front();
            q.pop();
            q.push(calories[j]);
            res+=helper(sum,lower,upper);
        }
        return res;
    }
        int helper(int a, int lower,int upper)
        {
            if(a<lower)
            {
                return -1;
            }
            if(a>upper)
            {
                return 1;
            }
            return 0;
        }

};
