class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        bool result = true;
        int *arr = new int[26];
        for (int i = 0; i < 26; i++)
        {
            arr[i] = 0;
        }
        for (int i = 0; i < sentence.length(); i++)
        {
            arr[int(sentence[i]) - 97] = arr[int(sentence[i]) - 97] + 1;
        }
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] == 0)
            {
                result = false;
                break;
            }
        }
        return result;
    }
};