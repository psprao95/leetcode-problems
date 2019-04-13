#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;


int main() {
    int n;
    cin>>n;
    int val,choice;
    stack<int> mainstack;
    stack<int> trackstack;
    for(int i=0;i<n;i++)
    {
        cin>>choice;
        if(choice==1)
        {
            cin>>val;
            mainstack.push(val);
            if(mainstack.size()==1)
            {
                trackstack.push(val);
            }
            else if(val>trackstack.top())
            {
                trackstack.push(val);
            }
            else
            {
                trackstack.push(trackstack.top());
            }
        }
        else if(choice==2)
        {
            mainstack.pop();
            trackstack.pop();
        }
        else{
            cout<<trackstack.top()<<endl;
        }
    }
    return 0;
}
