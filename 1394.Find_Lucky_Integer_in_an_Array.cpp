class Solution
{
public:
    int findLucky(vector<int> &arr)
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
        int a = -1;
        for (auto itr = map1.begin(); itr != map1.end(); ++itr)
        {
            if (itr->first == itr->second)
            {
                a = itr->first;
            }
        }
        if (a != -1)
        {
            return a;
        }
        else
        {
            return -1;
        }
    }
};