class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.size() == 0 || nums.size() == 1)
        {
            return nums.size();
        }

        map<int, int> map1;
        int max_length = 0;
        int current_length = 0;
        int prev = INT_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            map1[nums[i]] = i;
        }

        for (auto i : map1)
        {
            if (prev == INT_MIN)
                prev = i.first;
            else
            {
                if (i.first == prev + 1)
                {
                    current_length++;
                    if (max_length <= current_length)
                    {
                        max_length = current_length;
                    }
                }
                else
                {
                    current_length = 0;
                }

                prev = i.first;
            }
        }
        return max_length + 1;
    }
};