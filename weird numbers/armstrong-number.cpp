class Solution {
public:
    bool isArmstrong(int N) {
        int p=N;
     int sum=0,count=0;
        while(p)
        {
            p=p/10;
            count++;
        }
        p=N;
        while(p)
        {

            sum+=pow(p%10,count);
            p=p/10;
        }
        return sum==N;


    }
};
