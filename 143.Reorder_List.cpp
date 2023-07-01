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
    ListNode *reverse(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *next;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
    void reorderList(ListNode *head)
    {
        ListNode *start = head;
        ListNode *temp = head;

        ListNode *start_next;
        ListNode *end_next;

        ListNode *slow = head, *fast = head;

        while (fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
                fast = fast->next;
            temp = slow;
            slow = slow->next;
        }

        ListNode *end = slow;

        temp->next = NULL;

        end = reverse(end);
        ListNode *tail = start;

        while (start != NULL && end != NULL)
        {
            start_next = start->next;
            end_next = end->next;

            start->next = end;
            tail = end;
            end->next = start_next;
            start = start_next;
            end = end_next;
        }

        if (end != NULL)
        {
            tail->next = end;
        }
    }
};