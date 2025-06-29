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
    pair<ListNode *, ListNode *> reverse(ListNode *head)
    {
        ListNode *currHead = head;
        ListNode *prev = NULL;
        ListNode *curr = head;

        while (curr)
        {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return {prev, currHead};
    }

    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (!head || k == 1)
            return head;

        ListNode *temp = head;
        ListNode *prevTail = NULL;

        int i = 0;

        while (temp)
        {
            ListNode *tail = temp;
            for (int i = 1; i < k && tail != NULL; i++)
                tail = tail->next;

            if (tail == NULL)
                return head;

            ListNode *end = tail->next;
            tail->next = NULL;

            auto reversedPair = reverse(temp);
            ListNode *newHead = reversedPair.first;
            ListNode *newTail = reversedPair.second;
            if (i == 0)
            {
                head = newHead;
                i++;
            }

            if (prevTail)
                prevTail->next = newHead;

            newTail->next = end;
            prevTail = newTail;
            temp = end;
        }
        return head;
    }
};