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
    ListNode *getIntersection(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                fast = fast->next;
            }
            slow = slow->next;

            if (slow == fast)
            {
                return slow;
            }
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *intersection = getIntersection(head);

        if (intersection != NULL)
        {
            ListNode *slow = head;

            while (slow != NULL)
            {
                if (slow == intersection)
                {
                    return slow;
                }
                slow = slow->next;
                intersection = intersection->next;
            }
        }

        return NULL;
    }
};