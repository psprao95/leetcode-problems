class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> m;
        for(int a:arr)
        {
            m[a]++;
        }
        int n=arr.size();
        priority_queue<pair<int,int>> p;
        for(auto it=m.begin();it!=m.end();it++)
        {
            p.push({it->second,it->first});
        }
        int sum=0,count=0;
        while(sum<n/2)
        {
            sum+=p.top().first;
            p.pop();
            count++;
        }
        return count;
    }
};
