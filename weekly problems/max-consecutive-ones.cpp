class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int res=0,count=0;

        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {

                    if(count>res){res=count;}
                    count=0;

            }
            else
            {

                count++;
            }
        }
        if(count>res){res=count;}
        return res;
    }
};
