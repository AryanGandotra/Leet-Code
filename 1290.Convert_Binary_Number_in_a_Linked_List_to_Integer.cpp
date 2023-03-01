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
    int getLength(ListNode *head)
    {
        int length = 0;
        while (head != NULL)
        {
            length++;
            head = head->next;
        }
        return length;
    }
    int getDecimalValue(ListNode *head)
    {
        int length = getLength(head);
        int number = 0;
        ListNode *p = head;
        while (p)
        {
            number += (p->val) * pow(2, --length);
            p = p->next;
        }
        return number;
    }
};