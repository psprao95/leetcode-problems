// Two pointer Solution
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left,right;
        vector<vector<int>> res;
        int n=nums.size();
        for(int i=0;i<n-2;i++)
        {
            left=i+1;
            right=n-1;
            while(left<right)

            {
                if(nums[i]+nums[left]+nums[right]==0)
                {
                    res.push_back({nums[i],nums[left],nums[right]});
                    break;

                }
                if(nums[i]+nums[left]+nums[right]>0)
                {
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }
        return res;

    }
};
