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
    int length(ListNode *head)
    {
        int l = 0;
        while (head)
        {
            l++;
            head = head->next;
        }
        return l;
    }

    ListNode *reverse(ListNode *q)
    {
        ListNode *current = q;
        ListNode *prev = NULL, *next = NULL;

        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        q = prev;
        return q;
    }

    int pairSum(ListNode *head)
    {
        vector<int> sums;
        int count = length(head);
        ListNode *p = head;
        ListNode *q = head;
        ListNode *temp1 = p;

        for (int i = 0; i < (count / 2) - 1; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = NULL;

        q = reverse(q);

        while (p != NULL && q != NULL)
        {
            sums.push_back(temp1->val + q->val);
            temp1 = temp1->next;
            q = q->next;
        }

        int max = INT_MIN;

        for (int i = 0; i < sums.size(); i++)
        {
            if (sums[i] > max)
            {
                max = sums[i];
            }
        }

        return max;
        // return 0;
    }
};