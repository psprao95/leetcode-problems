class Solution {
public:
    int maximum69Number (int num) {
        vector<int> res;
        while(num)
        {
            res.push_back(num%10);
            num/=10;
        }
        reverse(res.begin(),res.end());
        for(int i=0;i<res.size();i++)
        {
            if(res[i]==6)
            {
                res[i]=9;break;
            }
        }
        int sum=0;
        for(int s:res)
        {
            sum=10*sum+s;
        }
        return sum;
    }
};
