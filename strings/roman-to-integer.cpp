class Solution {
public:
    int romanToInt(string s) {
        int res=0;
        int n=s.size();
            string sym[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int num[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        int k=0;
        int i=0;
        while(i<n)
        {
            if(sym[k].size()==1 && s[i]==sym[k][0])
            {
                i++;
                res+=num[k];
                continue;
            }
            if(i<n-1 && sym[k].size()==2)
            {
                if(sym[k][0]==s[i]&&sym[k][1]==s[i+1]){
                    res+=num[k];
                i+=2;
                continue;
                }
            }

                k++;

        }
        return res;
    }
};
