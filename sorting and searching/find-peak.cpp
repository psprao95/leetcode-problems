class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        {
            return -1;
        }
        int i=0;
        int j=nums.size()-1;
        int mid;
        while(i<j)
        {

            mid=(i+j)/2;

            if(nums[mid]<nums[mid+1])
            {
                i=mid+1;
            }
            else
            {
                j=mid;
            }
        }
        return i;

    }
};
