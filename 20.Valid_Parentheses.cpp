class Solution
{
public:
    bool isValid(string s)
    {
        if (s.length() == 1 || s[0] == ']' || s[0] == '}' || s[0] == ')')
        {
            return false;
        }

        stack<char> input;

        for (int i = 0; i < s.length(); i++)
        {
            if (input.empty() && (s[i] == '}' || s[i] == ']' || s[i] == ')'))
            {
                return false;
            }
            if (s[i] == '}' && input.top() == '{' || s[i] == ']' && input.top() == '[' || s[i] == ')' && input.top() == '(')
            {
                input.push(s[i]);
                input.pop();
                input.pop();
            }
            else
            {
                input.push(s[i]);
            }
        }

        if (input.empty())
        {
            return true;
        }

        else
        {
            return false;
        }
    }
};