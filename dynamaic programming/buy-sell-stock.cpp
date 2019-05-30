class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==0||n==1)
        {

            return 0;
        }

        vector<int> arr;
        for(int i=1;i<n;i++)
        {
            arr.push_back(prices[i]-prices[i-1]);
        }
        int res=max_subarray(arr,0,arr.size()-1);
        if(res<0)
        {
            return 0;
        }return res;

    }

    int max_subarray(vector<int>&prices,int low,int high)
    {
        if(low==high)
        {
            return prices[low];
        }
        int mid=(low+high)/2;
        int left=max_subarray(prices,low,mid);
        int right=max_subarray(prices,mid+1,high);
        int cross=max_subarray_cross(prices,low,mid,high);
        if(left>=right && left>=cross)
        {
            return left;
        }
        if(right>=left&&right>=cross)
        {
            return right;
        }
        return cross;
    }

    int max_subarray_cross(vector<int>&prices,int low,int mid, int high)
    {
        int l=INT32_MIN,sum=0;

        for(int i=mid;i>=low;i--)
        {
            sum+=prices[i];
            if(sum>l)
            {
                l=sum;
            }
        }
        sum=0;
        int r=INT32_MIN;
        for(int i=mid+1;i<=high;i++)
        {
            sum+=prices[i];
            if(sum>r)
            {
                r=sum;
            }
        }
        return (l+r);

    }
};
