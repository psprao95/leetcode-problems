class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size();
        int diff=arr[1]-arr[0];
        int p;
        for(int i=1;i<n-1;i++)
        {
            p=arr[i+1]-arr[i];
            p>=0?diff=min(diff,p):diff=max(diff,p);
        }
        for(int i=0;i<n-1;i++)
        {
            if(diff!=arr[i+1]-arr[i])
            {
                return arr[i]+diff;
            }
        }
        return 0;
    }
};
