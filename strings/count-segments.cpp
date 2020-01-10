class Solution {
public:
    int countSegments(string s) {
        int count=0;
        bool segment=false;
        for(char i:s)
        {
            if(segment && i==' ')
            {
                segment=false;
                count++;
            }
            if(i!=' '&&segment==false)
            {
                segment=true;
            }
        }
        if(segment)
        {
            count++;
        }
        return count;

    }
};
