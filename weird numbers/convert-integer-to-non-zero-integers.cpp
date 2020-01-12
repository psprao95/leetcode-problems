class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        int p=n-1;
        while(hasZeroes(p) ||hasZeroes(n-p))
        {
            p--;
        }

        return {p,n-p};
    }

    bool hasZeroes(int n)
    {
        while(n)
        {
            if(n%10==0)
            {
                return true;
            }
            n=n/10;
        }
        return false;
    }
};
