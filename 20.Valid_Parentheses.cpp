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
            // input string start from a closing bracket
            if (input.empty() && (s[i] == '}' || s[i] == ']' || s[i] == ')'))
            {
                return false;
            }

            // if an opening bracket is present on the top and a closing bracket comes in the string while traversing we pop out the top else we push the element in the stack

            if (s[i] == '}' && input.top() == '{' || s[i] == ']' && input.top() == '[' || s[i] == ')' && input.top() == '(')
            {
                input.pop();
            }
            else
            {
                input.push(s[i]);
            }
        }


        // if the stack is empty we say it is a valid paranthesis else it is not
        if (input.empty())
        {
            return true;
        }
        return false;
    }
};