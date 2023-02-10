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
    ListNode *rotateList(ListNode *head, int k)
    {
        ListNode *p = head;
        ListNode *q = NULL;
        while (p->next != NULL)
        {
            q = p;
            p = p->next;
        }
        p->next = head;
        head = p;
        q->next = NULL;
        return head;
    }

    int Count(ListNode *head)
    {
        ListNode *p = head;
        int count = 0;
        while (p != NULL)
        {
            count++;
            p = p->next;
        }
        return count;
    }

    ListNode *rotateRight(ListNode *head, int k)
    {

        int count = Count(head);
        cout << count << endl;
        if (head == NULL)
        {
            return NULL;
        }
        if (head->next == NULL)
        {
            return head;
        }
        while (k >= count && k > 200)
        {
            k = (k / count) + 1;
        }
        int i = 0;
        while (i < k)
        {
            head = rotateList(head, k);
            i++;
        }
        return head;
    }
};