class Solution {
public:
    bool checkRecord(string s) {
        int absent=0,count=0,res=0;

        for(char a:s)
        {
            if(a=='A')
            {
                absent++;

            }
            if(a=='L')
            {

                count++;

            }
            else{
                if(count>res){res=count;}
                count=0;
            }



        }
        if(count>res){res=count;}

        return absent<=1 && res<=2;
    }
};
