#include <iostream>

using namespace std;

void insertAtBottom(stack<int> &st, int x)
{
    if (st.empty())
    {
        st.push(x);
    }
    else
    {
        int a = st.top();
        st.pop();
        insertAtBottom(st, x);
        st.push(a);
    }
}

void reverseStack(stack<int> &st)
{
    if (!st.empty())
    {
        int element = st.top();
        st.pop();
        reverseStack(st);
        insertAtBottom(st, element);
    }
}

void print(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}

int main()
{
    stack<int> st;
    st.push(11);
    st.push(2);
    st.push(32);
    st.push(3);
    st.push(43);
    cout << "before Reversing: " << endl;
    print(st);
    reverseStack(st);
    cout << "______________________________________" << endl;
    cout << "after Reversing: " << endl;
    print(st);
    return 0;
}