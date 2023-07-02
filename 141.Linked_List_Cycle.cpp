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
    bool hasCycle(ListNode *head)
    {
        unordered_map<ListNode *, bool> map1;

        while (head != NULL)
        {
            if (map1[head] == true)
                return true;

            map1[head] = true;
            head = head->next;
        }

        return false;
    }
};