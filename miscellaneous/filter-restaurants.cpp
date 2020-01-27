class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector<int> res;
        map<int,int> m;
        priority_queue<pair<int,int>> p;
        int n=restaurants.size();
        bool k=veganFriendly==0?true:false;
        for(int i=0;i<n;i++)
        {


            if((restaurants[i][2]==1 || k) &&restaurants[i][3]<=maxPrice&&restaurants[i][4]<=maxDistance)
            {
                p.push({restaurants[i][1],restaurants[i][0]});
            }
        }
        while(!p.empty())
        {

            res.push_back(p.top().second);
            p.pop();
        }
        return res;


    }
};
