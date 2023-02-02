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
    bool allSame(ListNode *head, int val)
    {
        bool all = true;
        while (head != NULL)
        {
            if (head->val != val)
            {
                all = false;
            }
            head = head->next;
        }
        return all;
    }
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == NULL)
        {
            return head;
        }
        ListNode *temp = NULL;
        if (allSame(head, val))
        {
            return temp;
        }

        ListNode *p, *q;
        p = head;
        q = head;
        while (p)
        {
            if (head->val == val)
            {
                head = head->next;
            }
            if (p->val == val)
            {
                q->next = p->next;
                p = p->next;
            }
            else
            {
                q = p;
                p = p->next;
            }
        }
        return head;
    }
};