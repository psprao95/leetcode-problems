class Solution {
public:
    string getHint(string secret, string guess) {
        int n=secret.length();
        int cow=0,bull=0;
        map<int,int> s;
        map<int,int> t;
        for(int i=0;i<n;i++)
        {
            int a=secret[i]-'0';
            int b=guess[i]-'0';
            if(a==b)
            {
                bull++;
                continue;
            }
            if(s.find(b)!=s.end() && s[b]>=1)
            {
                cow++;
                s[b]--;


            }
            else
            {
                t[b]++;
            }
            if(t.find(a)!=t.end() && t[a]>=1)
            {
                cow++;
                t[a]--;


            }
            else{s[a]++;}

        }
        return to_string(bull)+"A"+to_string(cow)+"B";
    }
};
