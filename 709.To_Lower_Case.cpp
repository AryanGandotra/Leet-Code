class Solution
{
public:
    string toLowerCase(string s)
    {
        string result = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (int(s[i]) < 91 && int(s[i]) >= 65)
            {
                s[i] = char(int(s[i]) + 32);
            }
            result = result + s[i];
        }
        return result;
    }
};