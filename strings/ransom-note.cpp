class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.size();
        int m=magazine.size();
        if(n==0)
        {
            return true;
        }
        if(!m)
        {
            return false;
        }


        vector<int> alpha(26,0);
        for(int i=0;i<m;i++)
        {
            alpha[magazine[i]-'a']++;
        }
        for(int i=0;i<n;i++)
        {
            if(alpha[ransomNote[i]-'a']==0)
            {
                return false;
            }
            alpha[ransomNote[i]-'a']--;
        }
        return true;
    }
};
