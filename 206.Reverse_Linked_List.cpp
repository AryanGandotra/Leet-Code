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
    ListNode *reverseList(ListNode *head)
    {
        ListNode *p, *q, *r;
        p = head;
        r = NULL;
        if (head != NULL)
        {
            while (p != NULL)
            {
                q = p->next;
                p->next = r;
                r = p;
                p = q;
            }
            return r;
        }
        return head;
    }
};