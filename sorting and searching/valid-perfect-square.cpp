class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1,j=num;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(pow(mid,2)==num)
            {
                return true;
            }
            else if(pow(mid,2)>num)
            {
                j=mid-1;
            }
            else
            {
                i=mid+1;
            }
        }
        return false;
    }
};
