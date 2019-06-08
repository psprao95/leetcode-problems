class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0)
        {
            return -1;
        }

        int i=0;
        int j=n-1;
        int mid;
        while(i<=j)
        {
            mid=(i+j)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(target>nums[mid])
            {
                i=mid+1;
            }
            else
            {
                j=mid-1;
            }

        }
        return -1;

    }
};
