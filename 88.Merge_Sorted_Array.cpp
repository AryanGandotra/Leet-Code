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
                nums1.clear();
                nums1[i] = nums2[i];
            }
        }
        else
        {
            int i = 0, j = 0, k = 0;
            while (i < m && j < n)
            {
                if (nums3[i] < nums2[j])
                    nums1[k++] = nums3[i++];
                else
                    nums1[k++] = nums2[j++];
            }
            while (i < m)
                nums1[k++] = nums3[i++];

            while (j < n)
                nums1[k++] = nums2[j++];
        }
    }
};