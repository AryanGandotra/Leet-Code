/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    vector<int> nodesBetweenCriticalPoints(ListNode *head)
    {
        if (head->next->next == NULL)
            return {-1, -1};

        vector<int> arr;

        ListNode *prev = head, *curr = head->next, *next = curr->next;
        int index = 1;

        while (next)
        {
            if ((curr->val < prev->val && curr->val < next->val) ||
                (curr->val > prev->val && curr->val > next->val))
            {
                arr.push_back(index);
            }
            index++;
            prev = curr;
            curr = next;
            next = next->next;
        }

        if (arr.size() < 2)
        {
            return {-1, -1};
        }

        int minDist = INT_MAX;
        for (size_t i = 1; i < arr.size(); ++i)
        {
            minDist = min(minDist, arr[i] - arr[i - 1]);
        }

        int maxDist = arr.back() - arr.front();

        return {minDist, maxDist};
    }
};