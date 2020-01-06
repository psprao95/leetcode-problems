class Solution {
public:
    string reverseVowels(string s) {
        set<char> m{'a','e','i','o','u','A','E','I','O','U'};
        int i=0,n=s.size(),j=n-1;
        while(i<j)
        {
            while(i<j && m.find(s[i])==m.end())
            {
                i++;
            }
            if(i>=j){break;}
            while(j>i && m.find(s[j])==m.end())
            {
                j--;
            }
            if(j<=i){break;}
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};
