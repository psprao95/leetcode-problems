class Solution {
    vector<int>nums;
    int n;
public:
    bool canJump(vector<int>& nums) {
        this->nums=nums;
        this->n=nums.size();
        return helper(0);


        }

    bool helper(int i)
    {
        if(i==n-1)
        {
            return true;
        }
        if(i+nums[i]>=n-1)
        {
            return true;
        }
        for(int j=i+1;j<=i+nums[i];j++)
        {
            if(helper(j))
            {
                return true;
            }
        }
        return false;

    }
};
