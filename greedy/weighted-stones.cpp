class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue<int> q {stones.begin(),stones.end()};
        int a,b;
        while(q.size()>1)
        {
            a=q.top();
            q.pop();
            b=q.top();
            q.pop();
            if(b<a)
            {
                q.push(a-b);
            }
        }

        if(q.empty())
        {
            return 0;
        }
        return q.top();

    }
};
