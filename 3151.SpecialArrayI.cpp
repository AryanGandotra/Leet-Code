class Solution
{
public:
    bool isEven(int i)
    {
        if (i % 2 == 0)
            return true;
        return false;
    }
    bool checkParity(int i, int j, int k)
    {
        if (isEven(i) && isEven(k) && !isEven(j) || !isEven(i) && !isEven(k) && isEven(j))
            return true;

        return false;
    }

    bool isArraySpecial(vector<int> &arr)
    {
        if (arr.size() == 1)
        {
            return true;
        }

        if (arr.size() == 2)
        {
            if (isEven(arr[0]) && isEven(arr[1]) || !isEven(arr[0]) && !isEven(arr[1]))
                return false;
            return true;
        }

        for (int i = 1; i < arr.size() - 1; i++)
        {
            if (checkParity(arr[i - 1], arr[i], arr[i + 1]) == false)
                return false;
        }

        return true;
    }
};