class Solution
{
public:
    int sumSubarrayMins(vector<int> &arr)
    {
        vector<int> prevSmaller(arr.size(), -1);
        vector<int> nextSmaller(arr.size(), arr.size());
        stack<int> st;

        for (int i = 0; i < arr.size(); i++)
        {
            while (!st.empty() && arr[st.top()] > arr[i])
            {
                st.pop();
            }
            if (!st.empty())
            {
                prevSmaller[i] = st.top();
            }
            st.push(i);
        }
        while (!st.empty())
            st.pop();

        for (int i = arr.size() - 1; i >= 0; i--)
        {
            while (!st.empty() && arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            if (!st.empty())
            {
                nextSmaller[i] = st.top();
            }
            st.push(i);
        }

        long long ans = 0;
        int mod = 1e9 + 7;

        for (int i = 0; i < arr.size(); i++)
        {
            long long left = i - prevSmaller[i];
            long long right = nextSmaller[i] - i;
            ans = (ans + (arr[i] * left % mod) * right % mod) % mod;
        }

        return ans;
    }
};