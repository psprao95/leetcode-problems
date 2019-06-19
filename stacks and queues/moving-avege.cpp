class MovingAverage {
    double s=0,sum=0,last=0;
    int size;
    queue<int> q;
public:
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        this->size=size;
    }

    double next(int val) {
        if(s<size)
        {
            s++;
            q.push(val);

        }
        else
        {
            last=q.front();
            q.pop();
            q.push(val);
        }
        sum=sum+(double)val-last;
        return sum/s;

    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
