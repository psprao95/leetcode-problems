class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int n=J.size();
        int m=S.size();
        if(n==0||m==0)
        {
            return 0;
        }

        vector<bool> alpha(52,false);
        for(char s:J)
        {
            if(s>='a'&&s<='z')
            {
                alpha[s-'a']=true;
            }
            else
            {
                alpha[s-'A'+26]=true;
            }
        }

        int count=0;
        for(char s:S)
        {
            if(s>='a'&&s<='z')
            {
                if(alpha[s-'a'])
                {
                    count++;
                }
            }
            else
            {
                if(alpha[s-'A'+26])
                {
                    count++;
                }
            }
        }
        return count;
    }
};
