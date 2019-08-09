class Solution {
public:
    int change(int amount, vector<int>& coins) {

        if(amount==0)
        {
            return 1;
        }

        int m=coins.size();
        vector<int>arr(amount+1,0);
        arr[0]=1;

        for(int j=0;j<m;j++)
        {
           for(int i=1;i<amount+1;i++)
            {
                if(i-coins[j]>=0)
                {
                    arr[i]+=arr[i-coins[j]];
              }
        }

        }
        return arr[amount];
    }
};
