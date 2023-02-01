class Solution
{
public:
    string reverseStr(string str)
    {
        int len = str.length();
        int n = len - 1;
        int i = 0;
        while (i <= n)
        {
            swap(str[i], str[n]);
            n = n - 1;
            i = i + 1;
        }
        return str;
    }

    bool isPalindrome(string s)
    {
        if (s == " ")
        {
            return true;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (!((int(s[i]) <= 90 && int(s[i]) > 64) || (int(s[i]) <= 122 && int(s[i]) > 96) || (s[i]) <= 57 && int(s[i]) > 46))
            {
                s.erase(i, 1);
                i--;
            }
        }
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        string reverse = reverseStr(s);

        bool flag = false;
        if (reverse == s)
        {
            flag = true;
        }
        return flag;
    }
};