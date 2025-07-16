class Solution
{
public:
    void sortInWave(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i += 2)
        {
            if (i > 0 && arr[i] < arr[i - 1])
                swap(arr[i], arr[i - 1]);

            if (i < arr.size() - 1 && arr[i] < arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
    }
};