class Solution {
public:
    int romanToInt(string s) {
        map<char, int> table;
    map<char, int>::iterator it;
    table['I'] = 1;
    table['V'] = 5;
    table['X'] = 10;
    table['L'] = 50;
    table['C'] = 100;
    table['D'] = 500;
    table['M'] = 1000;
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        it = table.find(s[i]);
        if (it == table.end())
            break;
        else
        {
            if (s[i] == 'I' && s[i + 1] == 'I' && s[i + 2] == 'I' && s[i + 3] == 'I')
            {
                sum = sum + 4;
                i = i + 3;
            }
            else if (s[i] == 'I' && s[i + 1] == 'V')
            {
                sum = sum + 4;
                i = i + 1;
            }
            else if (s[i] == 'I' && s[i + 1] == 'X')
            {
                sum = sum + 9;
                i = i + 1;
            }
            else if (s[i] == 'X' && s[i + 1] == 'L')
            {
                sum = sum + 40;
                i = i + 1;
            }
            else if (s[i] == 'X' && s[i + 1] == 'C')
            {
                sum = sum + 90;
                i = i + 1;
            }
            else if (s[i] == 'C' && s[i + 1] == 'D')
            {
                sum = sum + 400;
                i = i + 1;
            }
            else if (s[i] == 'C' && s[i + 1] == 'M')
            {
                sum = sum + 900;
                i = i + 1;
            }
            else
            {
                sum = sum + it->second;
            }
        }
    }
    return sum;
    }
};