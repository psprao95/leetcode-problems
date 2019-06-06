class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n=nums.size();

        vector<int> left(n);
        int l=1;
        for(int i=0;i<n;i++)
        {
            left[i]=l;
            l=l*nums[i];
        }

        int r=1;
vector<int> right(n);
        for(int i=n-1;i>=0;i--)
        {
            right[i]=r;
            r=r*nums[i];
        }

        vector<int> res(n);
        for(int i=0;i<n;i++)
        {
            res[i]=left[i]*right[i];

        }
        return res;

    }
};
