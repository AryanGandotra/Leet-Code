class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int count = 1;
        vector<char> vector;
        for (int i = 0; i < s.length(); i++)
        {
            if (!(s[i + 1] == ' ' && s[i] == ' '))
            {
                vector.push_back(s[i]);
            }
        }

        if (vector[0] == ' ')
        {
            vector.erase(vector.begin() + 0);
        }
        if (vector[vector.size() - 1] == ' ')
        {
            vector.erase(vector.begin() + (vector.size() - 1));
        }

        int spaces = 0;
        for (int i = 0; i < vector.size(); i++)
        {
            if (vector[i] == ' ')
            {
                count++;
            }
        }
        int i;
        for (i = 0; i < vector.size(); i++)
        {
            if (spaces == count - 1)
            {
                break;
            }
            if (vector[i] == ' ')
            {
                spaces++;
            }
            
        }
        i=i+1;
        int max = 1;
        for (; i < vector.size(); i++)
        {
            max++;
        }
        return max;
    }
};