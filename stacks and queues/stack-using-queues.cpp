class MyStack {
    queue<int>q;
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        q.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int k=q.size()-1;
        while(k)
        {
            k--;
            q.push(q.front());
            q.pop();
        }
        int r=q.front();
        q.pop();
        return r;
    }

    /** Get the top element. */
    int top() {
        int k=q.size()-1;
        while(k)
        {
            k--;
            q.push(q.front());
            q.pop();
        }
        k=q.front();
        q.push(q.front());
        q.pop();
        return k;

    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
