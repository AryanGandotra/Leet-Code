class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        int freq[501] = {0};

        for (int num : arr)
        {
            freq[num]++;
        }

        for (int i = 500; i >= 1; --i)
        {
            if (freq[i] == i)
                return i;
        }

        return -1;
    }
};

// class Solution
// {
// public:
//     int findLucky(vector<int> &arr)
//     {
//         map<int, int> mp;
//         for (auto it : arr)
//         {
//             mp[it]++;
//         }

//         int ans = -1;

//         for (auto it : mp)
//         {
//             if (it.first == it.second)
//                 ans = it.first;
//         }

//         return ans;
//     }
// };