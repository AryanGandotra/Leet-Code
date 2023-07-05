class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        map<char, int> countText;
        map<char, int> balloon;
        for (char c : text)
            countText[c]++;
        for (char c : string("balloon"))
            balloon[c]++;

        int res = text.length();
        for (auto i : balloon)
            res = min(res, countText[i.first] / i.second);
        return res;
    }
};
