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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
    ListNode *p,*q;
    p=head->next;
    q=head;
        while(p!=NULL){
            if(q->val==p->val){
                q->next=p->next;
                p=p->next; 
            }
            else{
                q=p;
                p=p->next; 
            }       
        }
        return head;
    }
};