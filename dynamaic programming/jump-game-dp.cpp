class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        bool arr[n]={false};
        arr[n-1]=true;
        for(int i=n-2;i>=0;i--)
        {
            if(i+nums[i]>=n-1)
            {
                arr[i]=true;
                continue;
            }
            for(int j=i+1;j<=i+nums[i];j++)
            {
                if(arr[j])
                {
                    arr[i]=true;

                    break;
                }
            }


        }
        return arr[0];
    }
};
