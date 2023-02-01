#include<iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
class Solution {
public:

    void display(ListNode l1){
        while(l1->next!=NULL){
            cout<<l1->val<<"->";
            l1=l1->next;
        }
        cout<<endl;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // ListNode * sum;
        // ListNode *p1,*q1,*r1;
        // p1=l1;
        // p2=l2;
        // r1=r2=NULL;
        
        
    }
};
int main(){
    Solution s1;
    ListNode *l1,*l2;
    l1.val=2;
    l1.next->val=4;
    l1.next->next->val=3;
    l2.val=5;
    l2.next->val=6;
    l2.next->next->val=4;
    // s1.addTwoNumbers(&l1,&l2);
    s1.display(l1);
    s1.display(l2);
}