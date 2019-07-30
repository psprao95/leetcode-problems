class Solution {
public:
    bool confusingNumber(int N) {
        int n=0,rem,p=N;
        while(p)
        {
            rem=p%10;
            if(rem!=1 && rem!=6 &&rem!=9 && rem!=0 && rem!=8)
            {
                return false;
            }
            if(rem==6)
            {
                n=n*10+9;
            }
            else if(rem==9)
            {
                n=n*10+6;
            }
            else
            {
                n=n*10+rem;
            }
            p=p/10;
        }
        return n!=N;
    }
};
