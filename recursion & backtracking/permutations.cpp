class Solution {
    int n;
    vector<int> nums;
    vector<vector<int>> res;
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        this->n=n;
        this->nums=nums;
        helper(0);
        return res;
    }

    void helper(int begin)
    {
        if(begin==n)
        {
            res.push_back(nums);
        }

        for(int i=begin;i<n;i++)
        {
            swap(nums[i],nums[begin]);
            helper(begin+1);
            swap(nums[i],nums[begin]);
        }
    }
};
