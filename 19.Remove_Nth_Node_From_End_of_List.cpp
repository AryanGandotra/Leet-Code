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
        ListNode *r = NULL;
        ListNode *p = head;
        ListNode *q;
        while (p != NULL)
        {
            q = p->next;
            p->next = r;
            r = p;
            p = q;
        }
        return r;
    }
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if ((head->next == NULL && n == 1) || head == NULL)
        {
            return NULL;
        }
        head = reverse(head);
        ListNode *p = head;
        ListNode *q = head;
        if (n == 1)
        {
            head = head->next;
        }
        else
        {
            for (int i = 0; i < n - 2; i++)
            {
                p = p->next;
            }
            for (int i = 0; i < n - 1; i++)
            {
                q = q->next;
            }
            p->next = q->next;
        }
        head = reverse(head);
        return head;
    }
};