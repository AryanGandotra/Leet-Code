class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int n = temperatures.size();
        vector<int> result(n, 0);

        stack<int> s;

        for (int i = 0; i < n; i++)
        {
            while (!s.empty() && temperatures[s.top()] < temperatures[i])
            {
                int j = s.top();
                result[j] = i - j;
                s.pop();
            }
            s.push(i);
        }

        return result;
    }
};
