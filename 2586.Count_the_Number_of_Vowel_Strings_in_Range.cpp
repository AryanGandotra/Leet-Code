class Solution
{
public:
    int vowelStrings(vector<string> &words, int left, int right)
    {
        int vowel_String = 0;
        for (int i = left; i <= right; i++)
        {
            string a = words[i];
            if ((a[0] == 'a' || a[0] == 'e' || a[0] == 'i' || a[0] == 'o' || a[0] == 'u') && (a[a.length() - 1] == 'a' || a[a.length() - 1] == 'e' || a[a.length() - 1] == 'i' || a[a.length() - 1] == 'o' || a[a.length() - 1] == 'u'))
            {
                vowel_String++;
            }
        }
        return vowel_String;
    }
};