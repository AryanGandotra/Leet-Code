class Solution
{
public:
    bool zeroExists(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                return true;
            }
        }
        return false;
    }
    bool allZero(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                count++;
            }
        }
        if (count == nums.size())
        {
            return true;
        }
        return false;
    }
    int countZero(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                count++;
            }
        }
        return count;
    }
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> result;
        int countz = countZero(nums);
        bool zero_there = zeroExists(nums);

        for (int i = 0; i < nums.size(); i++)
        {
            result.push_back(0);
        }

        if (allZero(nums))
        {
            return result;
        }
        if (countz > 1)
        {
            return result;
        }

        int arr_product = 1;
        int arr_product_zero = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (zero_there == false)
            {
                arr_product *= nums[i];
            }
            else
            {
                if (nums[i] != 0)
                {
                    arr_product *= nums[i];
                }
                arr_product_zero *= nums[i];
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if ((nums[i] > 0 || nums[i] < 0) && (zero_there == true))
            {
                result[i] = 0;
            }
            else if ((nums[i] > 0 || nums[i] < 0) && (zero_there == false))
            {
                result[i] = arr_product / nums[i];
            }
            else
            {
                result[i] = arr_product;
            }
        }
        return result;
    }
};