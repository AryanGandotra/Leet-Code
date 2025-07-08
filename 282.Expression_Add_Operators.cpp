class Solution
{
public:
    void solve(string num, int currIndex, vector<string> &result, string expr, long currValue, long lastOperand, int target)
    {
        if (currIndex == num.length())
        {
            if (currValue == target)
            {
                result.push_back(expr);
            }
            return;
        }

        for (int i = currIndex; i < num.length(); i++)
        {
            // Prevent numbers with leading zero
            if (i != currIndex && num[currIndex] == '0')
                break;

            string currNumStr = num.substr(currIndex, i - currIndex + 1);
            long currNum = stol(currNumStr);

            if (currIndex == 0)
            {
                // First number, no operator
                solve(num, i + 1, result, currNumStr, currNum, currNum, target);
            }
            else
            {
                // +
                solve(num, i + 1, result, expr + "+" + currNumStr, currValue + currNum, currNum, target);
                // -
                solve(num, i + 1, result, expr + "-" + currNumStr, currValue - currNum, -currNum, target);
                // *
                solve(num, i + 1, result, expr + "*" + currNumStr, currValue - lastOperand + lastOperand * currNum, lastOperand * currNum, target);
            }
        }
    }

    vector<string> addOperators(string num, int target)
    {
        vector<string> result;
        solve(num, 0, result, "", 0, 0, target);
        return result;
    }
};