#include<vector>
class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int temp;
        if(nums.size()<2)
        {
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0){
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]!=0)
                {
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                    break;
                }
            }
            }
        }


    }
};
