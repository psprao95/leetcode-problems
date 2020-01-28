class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> s;
        int n=words.size();
        vector<string> alphabet{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i=0;i<n;i++)
        {
            string g=words[i];
            string res="";
            for(int j=0;j<g.size();j++)
            {
                res+=alphabet[g[j]-'a'];
            }
            if(s.find(res)==s.end())
            {
                s.insert(res);
            }
        }
        return s.size();
    }
};
