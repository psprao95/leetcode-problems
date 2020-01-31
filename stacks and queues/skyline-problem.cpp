class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        int n=buildings.size();
        vector<vector<int>> f;
        vector<vector<int>> res;
        for(int i=0;i<n;i++)
        {
            res.push_back({buildings[i][0],buildings[i][2],1});
            res.push_back({buildings[i][1],buildings[i][2],0});
        }

        sort(res.begin(),res.end());
        priority_queue<int> pq;
        pq.push(0);
        for(int i=0;i<2*n;i++)
        {
            if(res[i][2]==1)
            {
                if(res[i][1]>pq.top())
                {
                    f.push_back({res[i][0],res[i][1]});
                }
                pq.push(res[i][1]);
            }
            if(res[i][2]==0)
            {
                int t=pq.top();
                pq=func(pq,res[i][1]);
                if(res[i][1]==t)
                {
                    f.push_back({res[i][0],pq.top()});
                }
            }
        }
        return f;
    }

    priority_queue<int> func(priority_queue<int> &p,int i)
    {
        vector<int> res;
        while(!p.empty()&&p.top()!=i)
        {
            res.push_back(p.top());
            p.pop();
        }
        if(!p.empty()){p.pop();}
        for(int j:res){p.push(j);}
        return p;
    }
};
