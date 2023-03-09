class Solution
{
public:
    string thousandSeparator(int n)
    {

        if (n < 10 && n >= 0)
        {
            return to_string(n);
        }
        string result = "";
        int digits = 0;

        while (n > 0)
        {
            if (digits % 3 == 0)
            {
                result += '.';
            }
            int rem = n % 10;
            result += to_string(rem);
            digits++;
            n = n / 10;
        }

        result.erase(0, 1);

        int len = result.length();
        int a = len - 1;
        int i = 0;
        while (i <= a)
        {
            swap(result[i], result[a]);
            a = a - 1;
            i = i + 1;
        }

        // result.pop_back();

        return result;
    }
};