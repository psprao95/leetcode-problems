class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> res(1,1);
        int i=0,j=0,k=0;
        while(res.size()<n)
        {
            res.push_back(min(res[i]*2,min(res[j]*3,res[k]*5)));
            if(res.back()==res[i]*2)
            {
                i++;
            }
            if(res[j]*3==res.back())
            {
                j++;
            }
            if(res[k]*5==res.back())
            {
                k++;
            }
        }
        return res.back();
    }
};
