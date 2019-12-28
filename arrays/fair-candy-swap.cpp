class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        vector<int> res;

        int suma=0,sumb=0;
        for(int a:A)
        {
            suma+=a;
        }

        for(int b:B)
        {
            sumb+=b;
        }

        int k=(suma-sumb)/2;
        for(int a:A)
        {
            for(int b:B)
            {
                if(a-b==k)
                {
                    res.push_back(a);
                    res.push_back(b);
                    return res;
                }
            }
        }

        return res;
    }
};
