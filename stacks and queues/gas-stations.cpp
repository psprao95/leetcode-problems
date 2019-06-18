// Linear Solution
class Solution {
    vector<int>gas;
    vector<int> cost;
    int n;
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=cost.size();
        if(!n)
        {
            return -1;
        }
        int a=0,b=0;

        for(int i=0;i<n;i++)
        {
            a+=cost[i];
            b+=gas[i];
        }
        if(b<a)
        {
            return -1;
        }
        int balance=0,pos=0;
        for(int i=0;i<n;i++)
        {
            balance+=gas[i]-cost[i];
            if(balance<0)
            {
                pos=i+1;
                balance=0;
            }
        }
        return pos;
    }


};




// Brute force
class Solution {
    vector<int>gas;
    vector<int> cost;
    int n;
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=cost.size();
        if(!n)
        {
            return -1;
        }
        this->cost=cost;
        this->gas=gas;
        this->n=n;
        for(int i=0;i<n;i++)
        {
            if(helper(i,n))
            {
                return i;
            }


        }
        return -1;
    }


        bool helper(int i,int count)
        {

        int g=0;
        while(count)
        {
            g+=gas[i];
            if(g>=cost[i])
            {
                g-=cost[i];
                i=(i+1)%n;
                count--;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};
