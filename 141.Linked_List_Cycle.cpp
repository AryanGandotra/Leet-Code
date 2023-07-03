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
        if (head == NULL || head->next == NULL)
        {
            return false;
        }
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
                return true;
        }

        return false;
    }
};

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         unordered_map<ListNode*,bool>map1;

//         while(head!=NULL){
//             if(map1[head]==true)
//                 return true;

//             map1[head]=true;
//             head=head->next;
//         }

//         return false;
//     }
// };