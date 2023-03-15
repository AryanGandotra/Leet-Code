class Solution
{
public:
    int countDigits(int num)
    {
        int number = num;
        int result = 0;
        vector<int> digits;
        while (number > 0)
        {
            int rem = number % 10;
            digits.push_back(rem);
            number = number / 10;
        }

        for (int i = 0; i < digits.size(); i++)
        {
            if (num % digits[i] == 0)
                result += 1;
        }

        return result;
    }
};