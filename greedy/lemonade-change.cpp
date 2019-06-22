class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int n=bills.size();
        int f=0,t=0;
        for(int i=0;i<n;i++)
        {
            if(bills[i]==5)
            {
                f++;
                continue;
            }
            if(bills[i]==10)
            {
                if(!f)
                {
                    return false;
                }
                f--;
                t++;
                continue;
            }


            if(f>=3)
                {
                    f-=3;
                continue;
                }
            if(f>=1&&t>=1)
                {
                    f--;
                    t--;
                    continue;
                }

                    return false;

        }
        return true;
    }
};
