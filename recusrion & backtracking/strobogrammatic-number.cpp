// Requirements for the inout string to be strobo-grammatic number:
// 1. palindromic string
// 2. should contain only 0,1,6,8,9
class Solution {
public:
    bool isStrobogrammatic(string num) {
        int n=num.length();
        if(n==1)
        {
            if(num[0]=='0'||num[0]=='8'||num[0]=='1')
            {
                return true;
            }
            return false;
        }
        int i=0;
        int j=n-1;
        int p,q;
        while(i<=j)
        {
            p=num[i]-'0';
            q=num[j]-'0';
            if(p!=1&&p!=0&&p!=6&&p!=8&&p!=9)
            {
                return false;
            }
            if(q!=1&&q!=0&&q!=6&&q!=8&&q!=9)
            {
                return false;
            }

            if(p==6)
            {
                if(q!=9)
                {
                    return false;
                }
                i++;
                j--;
                continue;
            }
            if(p==9)
            {
                if(q!=6)
                {
                    return false;
                }
                i++;j--;
                continue;
            }

            if(p!=q)
            {
                return false;
            }

            i++;
            j--;
        }

        if(i>j)
        {
            return true;
        }
        return false;

    }


};
