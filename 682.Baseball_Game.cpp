class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        stack<int> s;

        for (string i : operations)
        {
            if (i == "+")
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.push(a);
                s.push(a + b);
            }
            else if (i == "D")
            {
                int a = s.top();
                s.push(2 * a);
            }
            else if (i == "C")
            {
                s.pop();
            }
            else
            {
                int a = stoi(i);
                s.push(a);
            }
        }

        int ans = 0;
        while (!s.empty())
        {
            ans += s.top();
            s.pop();
        }

        return ans;
    }
};