class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> ans;
        deque<int> dq;

        for (int i = 0; i < nums.size(); i++)
        {
            if (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();

            while (!dq.empty() && nums[dq.back()] <= nums[i])
                dq.pop_back();

            dq.push_back(i);

            if (i >= k - 1)
                ans.push_back(nums[dq.front()]);
        }

        return ans;
    }
};

// Better Solution

// class Solution
// {
// public:
//     vector<int> maxSlidingWindow(vector<int> &nums, int k)
//     {
//         queue<int> q;
//         vector<int> ans;
//         pair<int, int> currMax = {INT_MIN, INT_MIN};

//         for (int i = 0; i < k; i++)
//         {
//             q.push(nums[i]);
//             if (nums[i] >= currMax.first)
//             {
//                 currMax = {nums[i], i};
//             }
//         }

//         ans.push_back(currMax.first);

//         for (int i = k; i < nums.size(); i++)
//         {
//             int poppedIndex = i - k;
//             int poppedElement = q.front();
//             q.pop();
//             q.push(nums[i]);

//             int newMax = INT_MIN;
//             int newMaxIndex = -1;
//             for (int j = i - k + 1; j <= i; j++)
//             {
//                 if (nums[j] >= newMax)
//                 {
//                     newMax = nums[j];
//                     newMaxIndex = j;
//                 }
//             }
//             currMax = {newMax, newMaxIndex};

//             // Update currMax if new element is larger
//             if (nums[i] >= currMax.first)
//             {
//                 currMax = {nums[i], i};
//             }

//             ans.push_back(currMax.first);
//         }

//         return ans;
//     }
// };

// Breute force approach - will break on leetocde

// class Solution
// {
// public:
//     int getMax(vector<int> &nums, int left, int right)
//     {
//         int currMax = INT_MIN;

//         for (int i = left; i <= right; i++)
//         {
//             currMax = max(currMax, nums[i]);
//         }

//         return currMax;
//     }

//     vector<int> maxSlidingWindow(vector<int> &nums, int k)
//     {
//         vector<int> ans;

//         int i = 0, j = k - 1;

//         while (j < nums.size())
//         {
//             int currMax = getMax(nums, i, j);
//             ans.push_back(currMax);
//             i++;
//             j++;
//         }
//         return ans;
//     }
// };