#include <vector>
#include <stack>

vector<int> nextSmallerElement(vector<int> &nums2, int n)
{
    vector<int> nextGreater(nums2.size(), -1);
    stack<int> st;

    for (int i = nums2.size() - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() >= nums2[i])
        {
            st.pop();
        }

        if (!st.empty())
        {
            nextGreater[i] = st.top();
        }

        st.push(nums2[i]);
    }

    return nextGreater;
}