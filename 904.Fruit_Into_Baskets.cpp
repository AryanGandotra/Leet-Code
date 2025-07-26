class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {

        int i = 0, j = 0;
        int maxLength = 0;
        map<int, int> mp;

        while (j < fruits.size())
        {
            mp[fruits[j]]++;

            if (mp.size() > 2)
            {
                mp[fruits[i]]--;
                if (mp[fruits[i]] <= 0)
                    mp.erase(fruits[i]);
                i++;
            }
            if (mp.size() <= 2)
            {
                maxLength = max(maxLength, j - i + 1);
            }

            j++;
        }

        return maxLength;
    }
};

// class Solution
// {
// public:
//     int totalFruit(vector<int> &fruits)
//     {

//         int i = 0, j = 0;
//         int maxLength = 0;
//         map<int, int> mp;

//         while (j < fruits.size())
//         {
//             mp[fruits[j]]++;

//             while (mp.size() > 2)
//             {
//                 mp[fruits[i]]--;
//                 if (mp[fruits[i]] <= 0)
//                     mp.erase(fruits[i]);
//                 i++;
//             }
//             if (mp.size() <= 2)
//             {
//                 maxLength = max(maxLength, j - i + 1);
//             }

//             j++;
//         }

//         return maxLength;
//     }
// };