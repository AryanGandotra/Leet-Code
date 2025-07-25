class Solution
{
public:
    int maxFreqSum(string s)
    {
        vector<int> freq(26, 0);

        int maxFreqVowel = 0, maxFreqConsonant = 0;

        for (int i = 0; i < s.length(); i++)
        {
            freq[s[i] - 'a']++;
        }

        for (int i = 0; i < freq.size(); i++)
        {
            if (i == 0 || i == 4 || i == 8 || i == 14 || i == 20)
                maxFreqVowel = max(maxFreqVowel, freq[i]);
            else
                maxFreqConsonant = max(maxFreqConsonant, freq[i]);
        }

        return maxFreqVowel + maxFreqConsonant;
    }
};