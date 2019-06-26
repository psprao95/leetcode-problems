// logical approach
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n=timeSeries.size();
        if(!n||duration==0)
        {
          return 0;
        }
        int r=duration;
        long prev=timeSeries[0]+duration-1;
        int temp;
        for(int i=1;i<n;i++)
        {
           if(timeSeries[i]>prev)
           {
               r+=duration;
               prev=timeSeries[i]+duration-1;
               continue;
           }
            temp=timeSeries[i]+duration-1;
            r+=temp-prev;
            prev=temp;


        }
        return r;
    }
};


// merge intervals approach
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n=timeSeries.size();
        if(!n||duration==0)
        {
            return 0;
        }
        int res=0;
        int start=timeSeries[0];
        int end=timeSeries[0]+duration;

        for(int i=1;i<n;i++)
        {
           if(timeSeries[i]>end)
           {
               res+=end-start;
               start=timeSeries[i];
           }
            end=timeSeries[i]+duration;


        }
         res+=end-start;
        return res;
    }
};
