class Solution {
    vector<int> nums;
public:
    int lengthOfLIS(vector<int>& arr) {
        this->nums=arr;
        nums.insert(nums.begin(),INT32_MIN);
        return LIS(0,1);

    }

    int LIS(int prev,int start)
    {
        if(start>nums.size()-1)
        {
            return 0;
        }
        int include,ignore,best;
        ignore=LIS(prev,start+1);
        best=ignore;
        if(nums[start]>nums[prev])
        {
            include=1+LIS(start,start+1);
            if(include>ignore)
            {
                best=include;
            }
        }
        return best;

    }
};
