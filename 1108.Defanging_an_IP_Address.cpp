class Solution
{
public:
    string defangIPaddr(string address)
    {
        string result = "";
        for (int i = 0; i < address.length(); i++)
        {
            if (int(address[i]) == 46)
            {
                result += '[';
                result += '.';
                result += ']';
            }
            else if (int(address[i]) > 47 || int(address[i]) <= 57)
            {
                result += address[i];
            }
        }
        return result;
    }
};