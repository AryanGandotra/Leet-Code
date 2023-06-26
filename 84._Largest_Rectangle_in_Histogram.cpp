class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        vector<int> next_small_element(n, 0);
        vector<int> prev_small_element(n, 0);
        stack<int> s;
        stack<int> s2;

        s.push(-1);
        s2.push(-1);

        for (int i = n - 1; i >= 0; i--)
        {
            while (s.top() != -1 && heights[s.top()] >= heights[i])
            {
                s.pop();
            }
            next_small_element[i] = s.top();
            s.push(i);
        }

        for (int i = 0; i < n; i++)
        {
            while (s2.top() != -1 && heights[s2.top()] >= heights[i])
            {
                s2.pop();
            }
            prev_small_element[i] = s2.top();
            s2.push(i);
        }

        int area = 0;

        for (int i = 0; i < n; i++)
        {
            int length = heights[i];

            if (next_small_element[i] == -1)
                next_small_element[i] = n;

            int breadth = next_small_element[i] - prev_small_element[i] - 1;

            area = max(area, length * breadth);
        }

        return area;
    }
};