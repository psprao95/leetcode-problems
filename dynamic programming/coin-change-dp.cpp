class Solution {
    private: vector<int> coins;

public:
    int coinChange(vector<int>& coins, int amount) {

        if(amount==0)
        {
            return 0;
        }
        int rem=amount;
        int m=coins.size();
        vector<int> arr(amount+1);
        arr[0]=0;
        for(int i=1;i<amount+1;i++)
        {
            int res=INT32_MAX;
            bool flag=false;
            int sub;
            for(int j=0;j<m;j++)
            {

                if(i-coins[j]>=0)
                {
                    sub=arr[i-coins[j]];
                    if(sub>=0)
                    {

                    res=min(res,sub);
                    flag=true;
                    }


                }
            }
            if(!flag)
            {
                arr[i]=-1;
            }
            else
            {
                arr[i]=res+1;
            }
        }



        return arr[amount];



    }
};
