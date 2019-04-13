class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        int n=nums.size();
        k=k%n;
        for(int i=n-k;i<n;i++)
        {
            temp.push_back(nums[i]);
        }
        for(int i=n-1;i>=k;i--)
        {
            nums[i]=nums[i-k];
        }
        for(int i=0;i<k;i++)
        {
            nums[i]=temp[i];
        }


    }
};


//Approach 2
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());


    }
};
