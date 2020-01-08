class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n=name.size();
        int m=typed.size();
        int i=0,j=0,b=0,a;
        while(i<n || j<m)
        {
            char s=name[i];
            a=0;b=0;
            while(i<n &&name[i]==s)
            {
               i++;
                a++;
            }
            while(j<m && typed[j]==s)
               {j++;
               b++;}
            if(b<a){return false;}


        }
        return true;
    }
};
