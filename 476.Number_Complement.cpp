class Solution
{
public:
    string binary(int n)
    {
        string result = "";
        int temp;
        while (n > 0)
        {
            temp = n % 2;
            result += (temp + '0');
            n /= 2;
        }
        reverse(result.begin(), result.end());
        return result;
    }

    int findComplement(int num)
    {
        string s = binary(num);
        cout << s << " ";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                s[i] = '1';
            else
                s[i] = '0';
        }
        int t = stoi(s, nullptr, 2);
        return t;
    }
};