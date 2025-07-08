class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result(nums1.size());
        vector<int> nextGreater(nums2.size(), -1);
        stack<int> st;

        for (int i = nums2.size() - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top() <= nums2[i])
            {
                st.pop();
            }

            if (!st.empty())
            {
                nextGreater[i] = st.top();
            }

            st.push(nums2[i]);
        }

        unordered_map<int, int> map;
        for (int i = 0; i < nums2.size(); i++)
        {
            map[nums2[i]] = nextGreater[i];
        }

        for (int i = 0; i < nums1.size(); i++)
        {
            result[i] = map[nums1[i]];
        }

        return result;
    }
};

// class Solution
// {
// public:
//     int getIndex(int x, vector<int> &nums2)
//     {
//         int index = 0;
//         for (int i = index; i < nums2.size(); i++)
//             if (nums2[i] == x)
//             {
//                 index = i;
//                 break;
//             }
//         return index;
//     }
//     int getGreaterElement(int x, vector<int> &nums2)
//     {
//         int index = getIndex(x, nums2);
//         int greaterElement = -1;
//         for (int i = index; i < nums2.size(); i++)
//             if (nums2[i] > x)
//             {
//                 greaterElement = nums2[i];
//                 break;
//             }

//         return greaterElement;
//     }
//     vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
//     {
//         vector<int> ans;
//         for (int i = 0; i < nums1.size(); i++)
//         {
//             ans.push_back(getGreaterElement(nums1[i], nums2));
//         }
//         return ans;
//     }
// };