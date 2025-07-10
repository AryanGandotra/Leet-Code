class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        string ans = "";
        int n = num.length();
        stack<char> st;

        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && k > 0 && st.top() - '0' > num[i] - '0')
            {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }

        while (k > 0)
        {
            st.pop();
            k--;
        }

        while (!st.empty())
        {
            ans.insert(ans.begin(), st.top());
            st.pop();
        }

        int i = 0;
        while (i < ans.size() && ans[i] == '0')
            i++;

        ans = ans.substr(i);

        return ans.empty() ? "0" : ans;
    }
};