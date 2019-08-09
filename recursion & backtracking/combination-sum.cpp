class Solution {
   vector<int> nums;
    vector<vector<int>> res;
    int n;
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<int> r;
        int n=candidates.size();

        this->nums=candidates;
        sort(nums.begin(),nums.end());
        this->n=n;
        helper(0,target,r);
        return res;

    }

    void helper(int i,int rem,vector<int> r)
    {

        if(rem==0)
        {
            res.push_back(r);
            return;
        }
        while( i<n && nums[i]<=rem)
        {
            r.push_back(nums[i]);
            helper(i,rem-nums[i],r);
            i++;
            r.pop_back();
        }
    }
};
