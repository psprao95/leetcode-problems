class RecentCounter {
    queue<int> p;
public:
    RecentCounter() {

    }

    int ping(int t) {
        p.push(t);
        while(p.front()<t-3000)
        {

            p.pop();
        }
        return p.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
