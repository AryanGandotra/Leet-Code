class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        string result(s.length(), '*');
        int j = 0;

        for (int i = 0; i < indices.size(); i++)
        {
            result[indices[i]] = s[j];
            j++;
        }
        return result;
    }
};