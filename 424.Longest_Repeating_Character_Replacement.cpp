class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int i = 0, j = 0;
        int maxLength = 0;
        int maxFreq = 0;
        map<char, int> mp;

        while (j < s.length())
        {
            mp[s[j]]++;
            maxFreq = max(maxFreq, mp[s[j]]);

            if ((j - i + 1) - maxFreq > k)
            {
                mp[s[i]]--;
                i++;
            }

            maxLength = max(maxLength, j - i + 1);
            j++;
        }

        return maxLength;
    }
};

// class Solution
// {
// public:
//     int characterReplacement(string s, int k)
//     {
//         int i = 0, j = 0;
//         int maxLength = 0;
//         int maxFreq = 0;
//         map<char, int> mp;

//         while (j < s.length())
//         {
//             mp[s[j]]++;
//             maxFreq = max(maxFreq, mp[s[j]]);

//             while ((j - i + 1) - maxFreq > k)
//             {
//                 mp[s[i]]--;
//                 i++;
//             }

//             maxLength = max(maxLength, j - i + 1);
//             j++;
//         }

//         return maxLength;
//     }
// };