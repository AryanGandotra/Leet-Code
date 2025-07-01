#include <iostream>

using namespace std;

void insertElementInASortedWay(stack<int> &st, int x)
{
    if (st.empty() || st.top() < x)
    {
        st.push(x);
        return;
    }

    int element = st.top();
    st.pop();
    insertElementInASortedWay(st, x);
    st.push(element);
}

void sortStack(stack<int> &st)
{
    if (!st.empty())
    {
        int element = st.top();
        st.pop();
        sortStack(st);
        insertElementInASortedWay(st, element);
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
    cout << "before sorting: " << endl;
    print(st);
    sortStack(st);
    cout << "______________________________________" << endl;
    cout << "after sorting: " << endl;
    print(st);
    return 0;
}