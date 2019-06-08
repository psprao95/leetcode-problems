class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0,b=0,c=0;
        for(int i=0;i<nums.size();i++)

        {
            if(nums[i]==0)
            {
                a++;
            }
            if(nums[i]==1)
            {
                b++;
            }
            if(nums[i]==2)
            {
                c++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(a)
            {
                nums[i]=0;
                a--;
                continue;
            }
            if(b)
            {
                nums[i]=1;
                b--;
                continue;
            }
            if(c)
            {
                nums[i]=2;
                c--;
                continue;
            }
        }



    }
};
