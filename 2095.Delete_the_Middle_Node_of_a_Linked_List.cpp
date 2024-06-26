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
    pair<ListNode *, ListNode *> getMiddle(ListNode *head)
    {
        ListNode *slow = head, *fast = head, *prevToMid = NULL;

        while (fast != NULL && fast->next != NULL)
        {
            prevToMid = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        return {slow, prevToMid};
    }
    ListNode *deleteMiddle(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return NULL;
        ListNode *Middle = getMiddle(head).first;
        ListNode *PrevToMiddle = getMiddle(head).second;

        PrevToMiddle->next = Middle->next;
        delete Middle;
        return head;
    }
};
// class Solution
// {
// public:
//     int count(ListNode *head)
//     {
//         ListNode *p = head;
//         int count = 0;
//         while (p)
//         {
//             count++;
//             p = p->next;
//         }
//         return count;
//     }
//     ListNode *deleteMiddle(ListNode *head)
//     {
//         if (head == NULL)
//             return NULL;
//         if (head->next == NULL)
//         {
//             delete head;
//             return NULL;
//         }
//         int length = count(head);
//         ListNode *p = head;
//         int mid = length / 2;
//         while (mid-- > 1)
//         {
//             head = head->next;
//         }
//         head->next = head->next->next;
//         return p;
//     }
// };