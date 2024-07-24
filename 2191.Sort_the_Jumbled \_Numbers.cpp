class Solution
{
public:
    int reverseDigits(int num)
    {
        int rev_num = 0;
        while (num > 0)
        {
            rev_num = rev_num * 10 + num % 10;
            num = num / 10;
        }
        return rev_num;
    }

    vector<int> sortJumbled(vector<int> &mapping, vector<int> &nums)
    {
        map<int, vector<int>> mappedNums;
        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            int mappedNum = 0;
            int multiplier = 1;
            if (num == 0)
            {
                mappedNum = mapping[0];
            }
            else
            {
                while (num > 0)
                {
                    int rem = num % 10;
                    int mappedRem = mapping[rem];
                    mappedNum = mappedRem * multiplier + mappedNum;
                    num = num / 10;
                    multiplier *= 10;
                }
            }
            mappedNums[mappedNum].push_back(nums[i]);
        }

        vector<int> ans;

        for (auto it : mappedNums)
        {
            for (int i = 0; i < it.second.size(); i++)
            {
                ans.push_back(it.second[i]);
            }
        }

        return ans;
    }
};
