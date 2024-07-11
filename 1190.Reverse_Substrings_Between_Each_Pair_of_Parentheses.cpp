class Solution
{
public:
    string reverseParentheses(string s)
    {
        stack<int> st;
        string result;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                st.push(result.length());
            else if (s[i] == ')')
            {
                int start = st.top();
                st.pop();
                reverse(result.begin() + start, result.end());
            }
            else
            {
                result += s[i];
            }
        }

        return result;
    }
};