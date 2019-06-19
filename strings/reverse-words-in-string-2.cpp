class Solution {
public:
    void reverseWords(vector<char>& str) {
        if(str.size()==0||str.size()==1)
        {
            return;
        }
        reverse(str.begin(),str.end());


        int l=0,r=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]==' ')
            {

                    r=i;
                reverse(str.begin()+l,str.begin()+r);

                    l=i+1;
                }


            else
            {
                 if(i==str.size()-1)
                 {
                     r=i+1;
                     reverse(str.begin()+l,str.begin()+r);
                 }
            }


        }


    }







};
