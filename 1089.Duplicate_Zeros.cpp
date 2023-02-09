class Solution
{
public:
    void duplicateZeros(vector<int> &arr)
    {
        int length = arr.size();
        vector<int> result;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0)
            {
                arr.insert(arr.begin() + i, 0);
                i++;
            }
        }

        for (int i = 0; i < length; i++)
        {
            result.push_back(arr[i]);
        }
        arr = result;
    }
};