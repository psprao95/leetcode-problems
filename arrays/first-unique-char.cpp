class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> temp(26,0);

        for(int i=0;i<s.length();i++)
        {
            temp[s[i]-'a']=temp[s[i]-'a']+1;
        }
        for(int i=0;i<s.length();i++)
        {
            if(temp[s[i]-'a']==1)
            {
            return i;
            }
        }
        return -1;
    }
};
