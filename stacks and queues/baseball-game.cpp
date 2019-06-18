#include<string>
class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n=ops.size();
        if(!n)
        {
            return 0;
        }
        stack<int>p;
        int a=0,b=0,s=0,sum=0;
        for(int i=0;i<n;i++)
        {
            if(ops[i]=="C")
            {
                s=p.top();
                p.pop();
                sum-=s;


            }
            else if(ops[i]=="+")
            {
                a=p.top();
                p.pop();
                b=p.top();

                sum+=a+b;
                p.push(a);
                p.push(a+b);
            }
            else if(ops[i]=="D")
            {
                a=p.top();
                sum+=2*a;
                p.push(2*a);
            }
            else
            {
                s=stoi(ops[i]);
                sum+=s;
                 p.push(s);
            }

        }
        return sum;
    }
};
