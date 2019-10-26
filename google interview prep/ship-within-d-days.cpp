class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        int left=0,right=0;
        for(int w:weights)
        {
            left=max(left,w);
            right+=w;
        }

        int days,mid,cur;
        while(left<right)
        {
            mid=left+(right-left)/2;cur=mid;
            days=1;
            for(int w:weights)
            {
                if(cur-w<0)
                {
                    days++;
                    cur=mid;
                }
                cur-=w;
            }
            if(days>D)
            {
                left=mid+1;
            }
            else
            {
                right=mid;
            }
        }
        return left;
    }
};
