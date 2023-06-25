class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> numbers;

        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                int a = numbers.top();
                numbers.pop();
                int b = numbers.top();
                numbers.pop();

                switch (tokens[i][0])
                {
                case '+':
                    numbers.push(b + a);
                    break;
                case '-':
                    numbers.push(b - a);
                    break;
                case '*':
                    numbers.push(b * a);
                    break;
                case '/':
                    numbers.push(b / a);
                    break;
                }
            }
            else
            {
                numbers.push(stoi(tokens[i]));
            }
        }

        return numbers.top();
    }
};