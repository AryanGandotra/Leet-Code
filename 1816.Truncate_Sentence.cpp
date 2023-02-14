class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        int space_count = 0;
        string result = "";
        int i;
        for (i = 0; i < s.length(); i++)
        {
            if (space_count == k)
            {
                break;
            }
            if (s[i] == ' ')
            {
                space_count++;
            }
        }
        for (int j = 0; j < i - 1; j++)
        {
            result = result + s[j];
        }
        if (i == s.length())
        {
            return s;
        }
        return result;
    }
};