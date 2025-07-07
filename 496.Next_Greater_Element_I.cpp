class Solution
{
public:
    int getIndex(int x, vector<int> &nums2)
    {
        int index = 0;
        for (int i = index; i < nums2.size(); i++)
            if (nums2[i] == x)
            {
                index = i;
                break;
            }
        return index;
    }
    int getGreaterElement(int x, vector<int> &nums2)
    {
        int index = getIndex(x, nums2);
        int greaterElement = -1;
        for (int i = index; i < nums2.size(); i++)
            if (nums2[i] > x)
            {
                greaterElement = nums2[i];
                break;
            }

        return greaterElement;
    }
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            ans.push_back(getGreaterElement(nums1[i], nums2));
        }
        return ans;
    }
};