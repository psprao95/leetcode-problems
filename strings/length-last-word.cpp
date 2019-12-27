class Solution {
public:
    int lengthOfLastWord(string s) {
        int res=0;
        int count=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                if(count>0){res=count;
                count=0;}
            }
            else
            {
                if(i==n-1)
                {
                    return count+1;
                }
                count++;
            }
        }
        return res;
    }
};
