class Solution {
public:
    int mpizzaTreats(vector<int>& arr) {
        int n=arr.size();
        bool coupon=false;
        int t;
        for(int i=0;i<n;i++)
        {
          t=arr[i];
            if(coupon)
            {
              if(t==0)
              {
                return false;
              }
              t-=1;
              coupon=false;
            }
            t=t%2;
            if(t==1)
            {
              coupon=true;
            }

        }

        if(coupon){return false;}
        return true;


    }
};
