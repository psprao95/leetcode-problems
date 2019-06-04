class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        int i=0;
        int j=n-1;
        while(i<j)
        {

            int mid=(i+j)/2;
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
        if(nums[i]==target)
        {
            return i;
        }
        if(target>nums[i])
        {
            return i+1;
        }
        return max(0,i);

    }
};
