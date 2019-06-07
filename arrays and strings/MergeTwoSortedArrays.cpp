class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        vector<int> res;
        for(int k=0;k<m+n;k++)
        {
            if(i>=m)
            {
                res.push_back(nums2[j]);
                j++;
            }
            else if (j>=n)
            {
                res.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]<=nums2[j])
            {
               res.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                res.push_back(nums2[j]);
                    j++;
            }
        }
        for(int i=0;i<m+n;i++)
        {
            nums1[i]=res[i];
        }

    }

};
