#include <iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    vector<int> create_copy(vector<int> &vec)
    {
        vector<int> v(vec.size());
        copy(vec.begin(), vec.end(), v.begin());
        return v;
    }
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> nums3 = create_copy(nums1);
        if (nums1.empty() && !nums2.empty())
        {
            for (int i = 0; nums2.size(); i++)
            {
                nums1.push_back(nums2[i]);
            }
        }
        else
        {
            int i = 0, j = 0, k = 0;
            while (j < nums2.size() && k < nums3.size())
            {
                if (nums3[k] >= nums2[j])
                {
                    nums1[i] = nums2[j];
                    i++;
                    j++;
                }
                else
                {
                    nums1[i] = nums3[k];
                    i++;
                    k++;
                }
            }
            for (; j < nums2.size(); j++, i++)
            {
                nums1[i] = nums2[j];
            }
            for (; k < nums3.size(); k++, i++)
            {
                nums1[i] = nums3[k];
            }
        }
    }
};
int main()
{
    Solution S1;
    return 0;
}