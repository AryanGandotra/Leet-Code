class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int count[3] = {0};

        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
        }

        int index = 0;

        for (int i = 0; i < 3; i++)
        {
            if (count[i] > 0)
                while (count[i] > 0)
                {
                    nums[index] = i;
                    index++;
                    count[i]--;
                }
        }
    }
};