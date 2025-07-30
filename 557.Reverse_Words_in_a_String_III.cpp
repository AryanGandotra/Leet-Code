class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> words;
        stringstream ss(s);
        string word;

        while (ss >> word)
        {
            words.push_back(word);
        }

        s = "";

        for (int i = 0; i < words.size(); i++)
        {
            reverse(words[i].begin(), words[i].end());
            s += words[i];
            if (i != words.size() - 1)
                s += " ";
        }

        return s;
    }
};