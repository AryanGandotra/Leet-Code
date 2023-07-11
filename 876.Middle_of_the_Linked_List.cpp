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
    ListNode *middleNode(ListNode *head)
    {
        if (head->next == NULL)
            return head;
        ListNode *slow = head, *fast = head->next;

        while (fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
                fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int numberOfNodes=0;
//         if(head->next==NULL){
//             return head;
//         }
//         ListNode *p=head;
//         ListNode *q=head;
//         while(p!=NULL){
//             numberOfNodes++;
//             p=p->next;
//         }
//         if(numberOfNodes==2){
//             return head->next;
//         }
//         cout<<numberOfNodes<<endl;
//         if(numberOfNodes%2==0){
//             numberOfNodes+=1;
//         }
//         for(int i=0;i<numberOfNodes/2;i++){
//             q=q->next;
//         }
//         return q;
//     }
// };
