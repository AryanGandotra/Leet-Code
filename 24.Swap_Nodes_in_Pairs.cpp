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
    int countLength(ListNode *head)
    {
        int count = 0;
        while (head != NULL)
        {
            count++;
            head = head->next;
        }
        cout << count;
        return count;
    }
    ListNode *swapPairs(ListNode *head)
    {
        int length = countLength(head);
        if (length <= 3 && length > 1)
        {
            if (length == 2)
            {
                ListNode *p = head;
                ListNode *q = head->next;
                q->next = p;
                p->next = NULL;
                head = q;
            }
            else if (length == 3)
            {
                ListNode *p = head;
                ListNode *q;
                ListNode *temp;
                q = p->next;
                temp = q->next;
                q->next = p;
                p->next = temp;
                head = q;
            }
        }
        if (length > 3)
        {
            ListNode *p = head;
            ListNode *q;
            ListNode *temp;
            int count = 1;
            while (p->next != NULL)
            {
                q = p->next;
                temp = q->next;
                if (temp == NULL)
                {
                    q->next = p;
                    p->next = temp;
                    break;
                }
                q->next = p;
                if (temp->next != NULL)
                {
                    p->next = temp->next;
                }
                else
                {
                    p->next = temp;
                }
                if (count == 1)
                {
                    head = q;
                    count++;
                }
                p = temp;
            }
        }
        return head;
    }
};