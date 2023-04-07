class Solution
{
public:
    vector<int> separateDigits(vector<int> &nums)
    {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            ostringstream str1;
            str1 << nums[i];
            string str = str1.str();

            for (int j = 0; j < str.length(); j++)
            {
                int intdata;
                stringstream obj;
                obj << str[j];
                obj >> intdata;
                result.push_back(intdata);
            }
        }
        return result;
    }
};