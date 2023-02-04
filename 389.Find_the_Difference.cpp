class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        if (s.length() == 0)
        {
            return t[0];
        }
        int *arr = new int[26];
        for (int i = 0; i < 26; i++)
        {
            arr[i] = 0;
        }
        for (int i = 0; i < s.length(); i++)
        {
            arr[int(s[i]) - 97] = arr[int(s[i]) - 97] + 1;
        }

        for (int i = 0; i < t.length(); i++)
        {
            arr[int(t[i]) - 97] = arr[int(t[i]) - 97] + 1;
        }
        int result = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] % 2 == 1)
            {
                result = i + 97;
            }
        }
        return char(result);
    }
};