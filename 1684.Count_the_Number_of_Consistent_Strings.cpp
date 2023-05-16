class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int count = 0;
        for (int i = 0; i < words.size(); i++)
        {
            bool isConsistent = false;
            for (int j = 0; j < words[i].length(); j++)
            {
                bool isFound = allowed.find(words[i][j]) != string::npos;
                if (isFound)
                {
                    isConsistent = true;
                }
                else
                {
                    isConsistent = false;
                    break;
                }
            }

            if (isConsistent == true)
            {
                count++;
            }
        }
        return count;
    }
};