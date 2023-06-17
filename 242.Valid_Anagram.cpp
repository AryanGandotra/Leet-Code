// using integer array as the problem says it has only lower case english alphabets

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        int n = s.length();
        int arr[26] = {0};

        for (int i = 0; i < n; i++)
        {
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (arr[i] > 0)
                return false;
        }

        return true;
    }
};

// using unordered_maps

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.length()!=t.length())
//             return false;

//         int n= s.length();
//         unordered_map<char,int> frequency;

//         for(int i=0;i<n;i++){
//             frequency[s[i]]++;
//             frequency[t[i]]--;
//         }

//         for(auto letter:  frequency)
//             if(letter.second>0)
//                 return false;

//         return true;
//     }
// };

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         map<char,int> list1;
//         map<char,int> list2;

//         for(int i=0;i<s.length();i++){
//             map<char, int>::iterator it = list1.find(s[i]);
//             if (it != list1.end())
//             {
//                 it->second++;
//             }
//             else
//             {
//                 list1.insert(pair<char,int>(s[i],1));
//             }
//         }

//         for(int i=0;i<t.length();i++){
//             map<char, int>::iterator it = list2.find(t[i]);
//             if (it != list2.end())
//             {
//                 it->second++;
//             }
//             else
//             {
//                 list2.insert(pair<char,int>(t[i],1));
//             }
//         }
//         if (list1 == list2)
//             return true;
//         else{
//             return false;
//         }

//     }
// };
