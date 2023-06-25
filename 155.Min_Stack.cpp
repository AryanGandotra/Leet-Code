class MinStack
{
private:
    stack<int> numbers;
    stack<int> mins;

public:
    void push(int val)
    {
        numbers.push(val);
        if (mins.empty() || val <= mins.top())
            mins.push(val);
    }

    void pop()
    {
        if (numbers.top() == mins.top())
            mins.pop();
        numbers.pop();
    }

    int top()
    {
        return numbers.top();
    }

    int getMin()
    {
        return mins.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */