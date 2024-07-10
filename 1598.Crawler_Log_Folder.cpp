class Solution
{
public:
    int minOperations(vector<string> &logs)
    {
        stack<string> st;

        for (int i = 0; i < logs.size(); i++)
        {
            if (logs[i] == "../")
            {
                if (!st.empty())
                {
                    st.pop();
                }
            }
            else if (logs[i] == "./")
                continue;
            else
                st.push(logs[i]);
        }

        int count = 0;

        if (!st.empty())
        {
            while (!st.empty())
            {
                count++;
                st.pop();
            }
        }

        return count;
    }
};