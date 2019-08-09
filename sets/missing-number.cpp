// approach 1: using XOR method
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a=nums[0],b=0;
        int n=nums.size();
        for(int i=1;i<nums.size();i++)
        {
            a=a^nums[i];
        }

        for(int i=1;i<=n;i++)
        {
            b=b^i;
        }
        return a^b;
    }
};


// approach 2: using sum of numbers = n*(n+1)/2 formula
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n=nums.size();
        int a=n*(n+1)/2;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        return a-sum;
    }
};
