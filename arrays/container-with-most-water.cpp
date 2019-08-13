class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1,h,area,res=0;
        while(i<j)
        {
            h=min(height[i],height[j]);
            area=h*(j-i);
            if(area>res)
            {
                res=area;
            }
            while( i<n && height[i]<=h)
            {
                i++;
            }
            while( j>=0 && height[j]<=h)
            {
                j--;
            }
        }
        return res;
    }
};
