class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int size = sentences.size();
        vector<int> arr;

        for (int i = 0; i < size; i++)
        {
            arr.push_back(0);
        }

        for (int i = 0; i < sentences.size(); i++)
        {
            int words = 1;
            for (int j = 0; j < sentences[i].length(); j++)
            {
                if (sentences[i][j] == ' ')
                {
                    words++;
                }
            }
            arr[i] = words;
        }
        int max = INT_MIN;
        for (int i = 0; i < arr.size(); i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
        }

        return max;
    }
};