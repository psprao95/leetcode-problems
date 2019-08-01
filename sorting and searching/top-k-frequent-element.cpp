
class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<int> res;
        map<int,int> m;
        priority_queue<pair<int,int>> q;

        for(int num:nums)
        {

                m[num]++;

        }


        for(auto it=m.begin();it!=m.end();it++)
        {
            q.push(make_pair(it->second,it->first));
        }

        while(k)
        {
            k--;
            res.push_back(q.top().second);
            q.pop();
        }



        return res;
    }
};
