class Solution {

public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        nums.insert(nums.begin(),INT32_MIN);
        if(n==0)
        {
            return 0;
        }
        int arr[n+2][n+2];

        for(int i=0;i<n+2;i++)
        {
            arr[i][n+1]=0;
        }
        int best,include,ignore;
        for(int start=n;start>=1;start--)
        {
            for(int prev=start-1;prev>=0;prev--)
            {
                ignore=arr[prev][start+1];
                best=ignore;
                if(nums[start]>nums[prev])
                {
                    include=1+arr[start][start+1];
                    if(include>ignore)
                    {
                        best=include;
                    }
                }
                arr[prev][start]=best;

            }

        }
        return arr[0][1];


    }


};
