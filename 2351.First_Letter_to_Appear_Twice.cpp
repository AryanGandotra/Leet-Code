class Solution
{
public:
    char repeatedCharacter(string s)
    {
        map<char, int> map1;
        char result;
        for (int i = 0; i < s.length(); i++)
        {
            auto it = map1.find(s[i]);
            if (it == map1.end())
            {
                map1.insert(it, pair<char, int>(s[i], 1));
            }
            else
            {
                it->second++;
                if (it->second == 2)
                {
                    result = it->first;
                    break;
                }
            }
        }
        return result;
    }
};