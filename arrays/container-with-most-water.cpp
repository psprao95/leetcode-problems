class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,n=height.size();
        int j=n-1;
        int res=0;
        int l=0,h;
        while(i<j)
        {
            l=height[i];
            h=height[j];
            res=max(res,(j-i)*min(l,h));
            if(l<=h){
            while(i<j && height[i]<=l)
                    {
                        i++;
                    }}
             else{       while(j>i && height[j]<=h)
                    {
                        j--;
                    }}


        }
                    return res;
    }
};
