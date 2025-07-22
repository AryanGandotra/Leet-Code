class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        int i;
        for (i = 0; i < word.length(); i++)
        {
            if (word[i] == ch)
                break;
        }

        cout << i << endl;

        if (i == word.length())
            return word;

        string sub1 = word.substr(0, i + 1);
        reverse(sub1.begin(), sub1.end());
        string sub2 = word.substr(i + 1, word.length() - 1);

        return sub1 + sub2;
    }
};