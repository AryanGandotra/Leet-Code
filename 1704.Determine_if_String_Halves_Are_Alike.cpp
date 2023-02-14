class Solution
{
public:
    bool halvesAreAlike(string s)
    {
        int size = s.length();
        string a = "", b = "";
        int count_a = 0, count_b = 0;
        for (int i = 0; i < size / 2; i++)
        {
            a += s[i];
        }
        for (int i = size / 2; i < size; i++)
        {
            b += s[i];
        }
        for (int i = 0; i < a.length(); i++)
        {
            if (int(a[i]) == 97 || int(a[i]) == 101 || int(a[i]) == 105 || int(a[i]) == 111 || int(a[i]) == 117 || int(a[i]) == 65 || int(a[i]) == 69 || int(a[i]) == 73 || int(a[i]) == 79 || int(a[i]) == 85)
            {
                count_a++;
            }
        }

        for (int i = 0; i < b.length(); i++)
        {
            if (int(b[i]) == 97 || int(b[i]) == 101 || int(b[i]) == 105 || int(b[i]) == 111 || int(b[i]) == 117 || int(b[i]) == 65 || int(b[i]) == 69 || int(b[i]) == 73 || int(b[i]) == 79 || int(b[i]) == 85)
            {
                count_b++;
            }
        }
        if (count_a != count_b)
        {
            return false;
        }
        return true;
    }
};