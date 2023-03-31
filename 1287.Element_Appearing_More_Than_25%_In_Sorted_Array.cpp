class Solution
{
public:
    int findSpecialInteger(vector<int> &arr)
    {
        int n = arr.size();
        n = (25 * n) / 100;

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

        std::map<int, int>::iterator it = map1.begin();

        while (it != map1.end())
        {
            if (it->second > n)
            {
                return it->first;
            }
            ++it;
        }

        return n;
    }
};