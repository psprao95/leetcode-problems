class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int j=n-1;
        int carry=1,sum;
        while(j>-1)
        {
        sum=(digits[j]+carry);
           digits[j]=sum%10;
            carry=sum/10;
            j--;
        }
        if(carry)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
