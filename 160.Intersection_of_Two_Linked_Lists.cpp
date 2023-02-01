/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *p, *q;
        p = headA;
        q = headB;
        stack<ListNode *> stack1;
        stack<ListNode *> stack2;
        if (p->next == NULL && q->next == NULL && p == q)
        {
            return p;
        }
        while (p != NULL)
        {
            stack1.push(p);
            p = p->next;
        }
        while (q != NULL)
        {
            stack2.push(q);
            q = q->next;
        }

        while (stack1.top() == stack2.top())
        {
            p = stack1.top();
            stack1.pop();
            stack2.pop();
            if (stack1.empty() || stack2.empty())
            {
                return p;
            }
        }
        return p;
    }
};