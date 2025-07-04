class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        stack<char> st;
        int i = 0;
        while (i < s.length())
        {
            if (!st.empty() && s[i] == ')' && st.top() == '(')
                st.pop();
            else
                st.push(s[i]);
            i++;
        }
        return st.size();
    }
};