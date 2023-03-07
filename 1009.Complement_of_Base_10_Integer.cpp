class Solution
{
public:
    vector<int> convertTobinary(int n)
    {
        vector<int> result;
        while (n > 0)
        {
            result.insert(result.begin(), n % 2);
            n = n / 2;
        }
        return result;
    }

    void complement(vector<int> &binary)
    {
        for (int i = 0; i < binary.size(); i++)
        {
            if (binary[i] == 0)
            {
                binary[i] = 1;
            }
            else
            {
                binary[i] = 0;
            }
        }
    }

    int binaryToInteger(vector<int> &binary)
    {
        int num = 0;
        for (int i = 0; i < binary.size(); i++)
        {
            num += pow(2, (binary.size() - 1 - i)) * binary[i];
        }
        return num;
    }

    int bitwiseComplement(int n)
    {
        if (n == 0)
        {
            return 1;
        }
        vector<int> binary;

        binary = convertTobinary(n);
        complement(binary);
        int result = binaryToInteger(binary);
        return result;
    }
};