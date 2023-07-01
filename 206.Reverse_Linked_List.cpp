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

// recursive version

class Solution
{
public:
    void solve(ListNode *&head, ListNode *curr, ListNode *prev)
    {
        if (curr == NULL)
        {
            head = prev;
            return;
        }
        ListNode *next = curr->next;
        curr->next = prev;
        solve(head, next, curr);
    }

    ListNode *reverseList(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *next = curr->next;

        curr->next = prev;
        solve(head, next, curr);
        return head;
    }
};

// Iterative version

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode *p,*q,*r;
//             p=head;
//             r=NULL;
//         if(head!=NULL){
//             while(p!=NULL){
//                 q=p->next;
//                 p->next=r;
//                 r=p;
//                 p=q;
//             }
//             return r;
//         }
//         return head;
//     }
// };