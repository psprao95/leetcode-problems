// Given an arr of distinct integers, return all pairs with minimum absolute difference
// Approach 1: sorting and rest
// Approach 2: sorting and storing (diff,pair) in map
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>> res;
        sort(arr.begin(),arr.end());
        int diff=INT32_MAX;
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]<diff)
            {
                diff=abs(arr[i]-arr[i-1]);
            }
        }

        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]==diff)
            {
                res.push_back({arr[i-1],arr[i]});
            }
        }
        return res;
    }
};
