class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        map<int, int> map1;
        for (int i = 0; i < arr.size(); i++)
        {
            auto it = map1.find(arr[i]);
            if (it == map1.end())
            {
                map1.insert(it, pair<int, int>(arr[i], 1));
            }
            else
            {
                it->second++;
            }
        }

        int max = INT_MIN;
        for (auto itr = map1.begin(); itr != map1.end(); ++itr)
        {
            if (max < itr->second)
            {
                max = itr->second;
            }
        }

        int *a = new int[max + 1];
        for (int i = 1; i <= max; i++)
        {
            a[i] = 0;
        }

        for (auto itr = map1.begin(); itr != map1.end(); ++itr)
        {
            a[itr->second] += 1;
        }

        for (int i = 1; i <= max; i++)
        {
            if (a[i] > 1)
            {
                return false;
            }
        }

        return true;
    }
};