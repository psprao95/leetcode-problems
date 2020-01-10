class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> dict(26);
        for(char i:text)
        {
            dict[i-'a']++;
        }
        string s="balloon";
        int count=0;
        bool m=false;
        while(true)
        {
            m=false;
            for(int i=0;i<s.size();i++)
            {
                if(dict[s[i]-'a']==0)
                {
                    m=true;break;
                }
                dict[s[i]-'a']--;
            }
            if(m==true)
            {
                break;
            }
            count++;
        }
        return count;
    }
};
