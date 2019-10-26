class Solution {
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        int a=A.size();
        int b=B.size();
        map<int,int> mp;
        for(int i=0;i<a;i++)
        {
            mp[A[i]]++;
            mp[B[i]]++;
        }

        int h=INT32_MIN,n;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>h)
            {
                h=it->second;
                n=it->first;
            }
        }

        int f=0,g=0;
        for(int i=0;i<a;i++)
        {
            if(A[i]!=n && B[i]!=n)
            {
                return -1;
            }
            if(A[i]==n){f++;}
            if(B[i]==n){g++;}
        }
        return a-max(f,g);


    }
};
