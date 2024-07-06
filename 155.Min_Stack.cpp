class MinStack
{
public:
    stack<pair<int, int>> st;

    void push(int val)
    {
        int minVal;
        if (st.empty())
        {
            minVal = val;
        }
        else
        {
            minVal = min(val, st.top().second);
        }
        st.push({val, minVal});
    }

    void pop()
    {
        if (!st.empty())
            st.pop();
    }

    int top()
    {
        return st.top().first;
    }

    int getMin()
    {
        return st.top().second;
    }
};