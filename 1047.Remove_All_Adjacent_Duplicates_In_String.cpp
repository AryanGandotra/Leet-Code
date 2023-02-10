class Solution
{
public:
    string removeDuplicates(string s)
    {
        stack<char> stack1;
        stack<char> stack2;
        string result;
        for (int i = 0; i < s.length(); i++)
        {
            if (stack1.empty())
            {
                stack1.push(s[i]);
            }
            else if (s[i] == stack1.top())
            {
                stack1.push(s[i]);
                stack1.pop();
                stack1.pop();
            }
            else
            {
                stack1.push(s[i]);
            }
        }
        while (!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }

        while (!stack2.empty())
        {
            result += stack2.top();
            stack2.pop();
        }

        return result;
    }
};