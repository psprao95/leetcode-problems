class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        int l=0,r=0;
        for(int i=0;i<n;i++)
        {
            left[i]=l;
            l+=nums[i];

        }
        for(int i=n-1;i>=0;i--)
        {
        right[i]+=r;
            r+=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            if(left[i]==right[i])
            {
                return i;
            }
        }
        return -1;
    }
};
