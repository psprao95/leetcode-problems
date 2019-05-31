class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m;
        vector<int> res;
        for(int i=0;i<nums1.size();i++)
        {
            m.insert(nums1[i]);
        }

        for(int i=0;i<nums2.size();i++)
        {
            if(m.count(nums2[i]))
                 {
                     res.push_back(nums2[i]);
                m.erase(nums2[i]);
                 }
        }
                 return res;



    }
};
