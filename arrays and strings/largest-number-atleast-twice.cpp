class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        if(!n)
        {
            return -1;
        }
        if(n==1)
        {
            return 0;
        }

        int index,largest=nums[0],second;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>largest)
            {
                second=largest;
                largest=nums[i];
                index=i;
            }
        }
        if(largest>=2*second)
        {
            return index;
        }
        return -1;
    }
};
