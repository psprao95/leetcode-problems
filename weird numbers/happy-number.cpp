class Solution {
public:
    bool isHappy(int n) {

        int slow=n,fast=n;
        do
        {
            slow=addDigits(slow);
            fast=addDigits(fast);
            fast=addDigits(fast);
        }
        while(slow!=fast);
        if(slow==1)
        {
            return true;
        }

        return false;
    }


    int addDigits(int n)
    {
        int sum=0;
        while(n)
        {
            sum+=pow(n%10,2);
            n=n/10;
        }
        return sum;
    }
};
