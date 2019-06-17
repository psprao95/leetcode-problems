class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int n=A.size();
        int i=0,mid;
        int j=n-1;
        while(i<=j)
        {
            mid=(i+j)/2;
            if(A[mid]>A[mid+1] && A[mid]>A[mid-1])
            {
                return mid;
            }
            else if(A[mid]<A[mid+1])
            {
                i=mid+1;
            }
            else
            {
                j=mid;
            }
        }
        return i;
    }
};
