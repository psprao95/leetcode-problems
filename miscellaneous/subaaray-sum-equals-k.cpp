class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            res+=helper(i,nums.size(),0,k,nums);
        }
        return res;
    }

    int helper(int i,int n, int sum, int target,vector<int> &nums)

        {
            if(i==n)
            {
                return 0;
            }
        sum+=nums[i];
        int h=helper(i+1,n,sum,target,nums);
        if(sum==target){return 1+h;}
        return h;
        }

};
