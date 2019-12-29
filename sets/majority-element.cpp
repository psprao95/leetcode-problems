class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int> m;
        for(int n:nums)
        {
            if(m.find(n)!=m.end())
            {
                m[n]++;
            }
            else
            {
                m[n]=1;
            }
        }

        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second>n/2)
            {
                return it->first;
            }
        }
        return -1;
    }
};
