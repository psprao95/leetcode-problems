class MyQueue {
    stack<int> left;
    stack<int> right;

public:
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        left.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int a;
        if(!right.empty())
        {
            a=right.top();
            right.pop();
            return a;
        }
        else
        {
            while(!left.empty())
            {
                a=left.top();
                left.pop();
                right.push(a);
            }
            a=right.top();
            right.pop();
            return a;
        }

    }

    /** Get the front element. */
    int peek() {
        int a;
        if(!right.empty())
        {
            return right.top();
        }
        else
        {
            while(!left.empty())
            {
                a=left.top();
                left.pop();
                right.push(a);
            }
            return right.top();
        }


    }

    /** Returns whether the queue is empty. */
    bool empty() {
        if(left.empty() &&right.empty())
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
