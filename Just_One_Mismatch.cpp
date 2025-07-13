class Solution
{
public:
    bool checkString(string s1, string s2, int length)
    {
        int count = 0;
        for (int i = 0; i < length; i++)
        {
            if (s1[i] != s2[i])
            {
                count++;
                if (count > 1)
                    break;
            }
        }
        return count == 1 ? true : false;
    }
    string isStringExist(vector<string> arr, int N, string S)
    {

        for (int i = 0; i < N; i++)
        {
            if (arr[i].length() == S.length())
            {
                if (checkString(arr[i], S, S.length()))
                {
                    return "True";
                }
            }
        }
        return "False";
    }
};