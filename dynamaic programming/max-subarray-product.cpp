class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        {
            return n;
        }

        int a=nums[0];
        int b=nums[0];
        int res=nums[0];

        for(int i=1;i<n;i++)
        {
            if(nums[i]<0)
            {
                int temp=a;
                a=b;b=temp;

            }
           a=max(nums[i],a*nums[i]);
                b=min(nums[i],b*nums[i]);
            res=max(res,a);
        }
        return res;

    }
};
