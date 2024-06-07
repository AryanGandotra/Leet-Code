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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *slow = head, *fast = head;

        for (int i = 0; i < n; i++)
        {
            fast = fast->next;
        }

        if (fast == NULL)
            return head->next;

        while (fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }

        ListNode *delNode = slow->next;
        slow->next = delNode->next;
        delete delNode;
        return head;
    }
};
// class Solution
// {
// public:
//     ListNode *removeNthFromEnd(ListNode *head, int n)
//     {
//         ListNode *temp = NULL;
//         ListNode *left = head;
//         ListNode *right = head;

//         while (n > 0 && right != NULL)
//         {
//             right = right->next;
//             n--;
//         }

//         if (!right)
//             return head->next;

//         while (right != NULL)
//         {
//             temp = left;
//             left = left->next;
//             right = right->next;
//         }
//         temp->next = left->next;
//         delete left;

//         return head;
//     }
// };

// class Solution {
// public:
//     int getLength(ListNode* head){
//         int count = 0;

//         while(head!=NULL){
//             count++;
//             head=head->next;
//         }
//         return count;
//     }

//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         if(head==NULL || head->next==NULL && n==1){
//             return NULL;
//         }

//         int count = getLength(head);

//         if(n==count){
//             head = head->next;
//             return head;
//         }

//         ListNode* curr = head;
//         ListNode* prev=NULL;

//         for(int i=0;i<(count-n);i++){
//             prev=curr;
//             curr=curr->next;
//         }

//         prev->next = curr->next;
//         curr->next = NULL;

//         return head;
//     }
// };

// By reversing the linked list

// class Solution {
// public:
//     ListNode* reverse(ListNode* head){
//         ListNode* r=NULL;
//         ListNode* p=head;
//         ListNode* q;
//         while(p!=NULL){
//             q=p->next;
//             p->next=r;
//             r=p;
//             p=q;
//         }
//         return r;
//     }
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         if((head->next==NULL && n==1)||head==NULL){
//             return NULL;
//         }
//         head=reverse(head);
//         ListNode* p=head;
//         ListNode* q=head;
//         if(n==1){
//             head=head->next;
//         }
//         else{
//             for(int i=0;i<n-2;i++){
//             p=p->next;
//         }
//         for(int i=0;i<n-1;i++){
//             q=q->next;
//         }
//         p->next=q->next;
//         }
//         head=reverse(head);
//         return head;
//     }
// };