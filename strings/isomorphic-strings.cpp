class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m)
        {
            return false;
        }
        vector<char> a(128,'\0');
        vector<char> b(128,'\0');

        for(int i=0;i<n;i++)
        {

            if(a[s[i]]!=b[t[i]])
            {
                return false;
            }

            if(a[s[i]]=='\0')
            {
                a[s[i]]=t[i];
                b[t[i]]=t[i];
            }


            }
            return true;
    }
};
