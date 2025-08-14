class Solution
{
public:
    string largestGoodInteger(string num)
    {
        int i = 0;

        string ans = "";

        while (i + 2 < num.length())
        {
            if (num[i] == num[i + 1] && num[i + 1] == num[i + 2])
            {
                string currNum = num.substr(i, 3);
                ans = max(ans, currNum);
            }
            i++;
        }

        return ans;
    }
};