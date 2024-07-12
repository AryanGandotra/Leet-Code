class Solution
{
public:
    pair<int, string> deleteAB(string s, int points)
    {
        stack<char> st;
        int score = 0;
        string newS = "";
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            if (st.empty())
                st.push(s[i]);
            else if (s[i] == 'b' && st.top() == 'a')
            {
                st.pop();
                score += points;
            }
            else
            {
                st.push(s[i]);
            }
        }

        while (!st.empty())
        {
            newS += st.top();
            st.pop();
        }

        reverse(newS.begin(), newS.end());

        return {score, newS};
    }

    pair<int, string> deleteBA(string s, int points)
    {
        stack<char> st;
        int score = 0;
        string newS = "";
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            if (st.empty())
                st.push(s[i]);
            else if (s[i] == 'a' && st.top() == 'b')
            {
                st.pop();
                score += points;
            }
            else
            {
                st.push(s[i]);
            }
        }

        while (!st.empty())
        {
            newS += st.top();
            st.pop();
        }

        reverse(newS.begin(), newS.end());

        return {score, newS};
    }

    int maximumGain(string s, int x, int y)
    {

        if (x > y)
        {
            int score = 0;
            score += deleteAB(s, x).first;
            s = deleteAB(s, x).second;
            score += deleteBA(s, y).first;
            return score;
        }
        else
        {
            int score = 0;
            score += deleteBA(s, y).first;
            s = deleteBA(s, y).second;
            score += deleteAB(s, x).first;
            return score;
        }
    }
};