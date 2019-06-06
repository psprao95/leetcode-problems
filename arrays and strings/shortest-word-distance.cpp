class Solution {
public:
    int shortestDistance(vector<string>& words, string word1, string word2) {
        int a=-1, b=-1;
        int dist=INT32_MAX;
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            if(words[i]==word1)
            {
                a=i;
                if(b!=-1)
                {
                    dist=min(dist,abs(a-b));
                }
            }
            if(words[i]==word2)
            {
                b=i;
                if(a!=-1)
                {
                    dist=min(dist,abs(a-b));
                }
            }
        }

        return dist;

    }
};
