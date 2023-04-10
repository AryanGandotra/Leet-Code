class Solution
{
public:
    int countAsterisks(string s)
    {
        stack<char> stack;
        int bar_no = 0;
        int result = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '|')
            {
                stack.push(s[i]);
                bar_no++;
            }
            if (bar_no == 1)
            {
                stack.push(s[i]);
            }
            else if (s[i] == '*')
            {
                result++;
            }
            if (bar_no == 2)
            {
                while (!stack.empty())
                {
                    stack.pop();
                }
                bar_no = 0;
            }
        }

        return result;
    }
};