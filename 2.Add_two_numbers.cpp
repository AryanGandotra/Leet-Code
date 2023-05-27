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
    ListNode *biggest(ListNode *l1, ListNode *l2)
    {
        int count1 = 0, count2 = 0;
        ListNode *p, *q;
        p = l1;
        q = l2;
        while (p)
        {
            count1++;
            p = p->next;
        }
        while (q)
        {
            count2++;
            q = q->next;
        }
        if (count1 >= count2)
        {
            return l1;
        }
        return l2;
    }

    void insert(ListNode **root, int item)
    {
        ListNode *temp = new ListNode;
        ListNode *ptr;
        temp->val = item;
        temp->next = NULL;

        if (*root == NULL)
            *root = temp;
        else
        {
            ptr = *root;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = temp;
        }
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *p = l1, *q = l2;
        int carry = 0;
        int sum;
        int digit;
        ListNode *temp = NULL;
        while (p != NULL && q != NULL)
        {
            sum = p->val + q->val + carry;
            digit = sum % 10;
            insert(&temp, digit);
            carry = sum / 10;
            p = p->next;
            q = q->next;
        }
        while (p != NULL)
        {
            digit = (p->val + carry) % 10;
            carry = (p->val + carry) / 10;
            insert(&temp, digit);
            p = p->next;
        }

        while (q != NULL)
        {
            digit = (q->val + carry) % 10;
            carry = (q->val + carry) / 10;
            insert(&temp, digit);
            q = q->next;
        }

        if (carry > 0)
        {
            insert(&temp, carry);
            carry = 0;
        }

        return temp;
    }
};
