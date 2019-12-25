class Solution {
public:
    int mySqrt(int x) {
        int a=0,b=x;
        int mid;
        while(a<=b)
        {
            mid=a+(b-a)/2;
            if(pow(mid,2)==x)
            {
                return mid;
            }
            else if(pow(mid,2)>x)
            {
                b=mid-1;
            }
            else
            {
                a=mid+1;
            }
        }
        return a-1;
    }
};
