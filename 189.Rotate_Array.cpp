class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {

        k %= nums.size();

        int i = 0, j = nums.size() - 1;

        while (i <= j)
        {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }

        int n = 0, m = k - 1;

        while (n <= m)
        {
            swap(nums[n], nums[m]);
            n++;
            m--;
        }

        n = k;
        m = nums.size() - 1;

        while (n <= m)
        {
            swap(nums[n], nums[m]);
            n++;
            m--;
        }
    }
};

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//     vector<int>arr2(nums.size());
//     for (int i = 0; i < nums.size(); i++)
//     {
//         arr2[(i + k) % nums.size()] = nums[i];
//     }

//     for (int i = 0; i < nums.size(); i++)
//     {
//         nums[i] = arr2[i];
//     }
//     }
// };