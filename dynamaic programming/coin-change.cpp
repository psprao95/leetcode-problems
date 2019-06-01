class Solution {
    private: vector<int> coins;

public:
    int coinChange(vector<int>& coins, int amount) {

        if(amount==0)
        {
            return 0;
        }
        int m=coins.size();
        if(m==0)
        {
            return -1;
        }
        return helper(amount,m,coins);

    }

    int helper(int rem,int m, vector<int>&coins)
    {
        if(rem<0)
        {
            return -1;
        }
        if(rem==0)
        {
            return 0;
        }


        int res=INT32_MAX;
       bool flag=false;
        int sub;
        for(int i=0;i<m;i++)
        {
            if(rem-coins[i]>=0)
            {
                sub=helper(rem-coins[i],m,coins);
                if(sub==-1)
                {
                    return -1;
                }
                res=min(res,sub+1);
                flag=true;
        ;
            }


        }


          if(!flag)
          {
              return -1;
          }
        return res;



    }
};
