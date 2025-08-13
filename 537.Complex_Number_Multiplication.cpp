class Solution
{
public:
    string complexNumberMultiply(string num1, string num2)
    {
        // Parse num1
        int plusPos1 = num1.find('+');
        int r1 = stoi(num1.substr(0, plusPos1));
        int i1 = stoi(num1.substr(plusPos1 + 1, num1.size() - plusPos1 - 2)); // skip 'i'

        // Parse num2
        int plusPos2 = num2.find('+');
        int r2 = stoi(num2.substr(0, plusPos2));
        int i2 = stoi(num2.substr(plusPos2 + 1, num2.size() - plusPos2 - 2));

        // Multiply
        int real_ans = (r1 * r2) - (i1 * i2);
        int imag_ans = (r1 * i2) + (i1 * r2);

        // Build answer
        return to_string(real_ans) + "+" + to_string(imag_ans) + "i";
    }
};