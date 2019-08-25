class Solution {
    int n;
    vector<int> r;
    vector<vector<int>> res{{}};
    vector<int> nums;
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        this->nums=nums;
        this->n=nums.size();
        for(int i=0;i<n;i++)
        {
            helper(i);
        }
        return res;
    }

    void helper(int begin)
    {
        r.push_back(nums[begin]);
        res.push_back(r);
        for(int j=begin+1;j<n;j++)
        {
            helper(j);
        }
        r.pop_back();
    }
};
