class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int i = 0, j = 0;
        string result;

        int n = word1.length();
        int m = word2.length();

        while (i < n && j < m)
        {
            result += word1[i];
            result += word2[j];
            i++;
            j++;
        }

        while (i < n)
        {
            result += word1[i];
            i++;
        }

        while (j < m)
        {
            result += word2[j];
            j++;
        }

        return result;
    }
};