class Solution {
public:
    bool detectCapitalUse(string word) {
        bool lower=false,upper=false,b=false;
        int n=word.size();
        for(int i=0;i<n;i++)
        {
            //if(is)
            if(islower(word[i]))
            {
                lower=true;
            }
            else
            {
                upper=true;
                if(i>0){b=true;}
            }
        }
        if(!lower || !upper ||!b){return true;}return false;
    }
};
