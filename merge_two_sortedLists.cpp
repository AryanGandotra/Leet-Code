#include<iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* final,*temp;
        if(list1 == NULL){
            return list2;
        }
        else if(list2 == NULL){
            return list1;
        }
        else{
            if(list1->val <= list2->val){
                final=list1;
                list1=list1->next;
            }
            else{
                final=list2;
                list2=list2->next;
            }
            temp=final;
            while(list1!=NULL && list2!=NULL){   
            if(list1->val <= list2->val){
                temp->next=list1;
                temp=temp->next;
                list1=list1->next;
            }
            else {
                temp->next=list2;
                temp=temp->next;
                list2=list2->next;
            }
        }
        while(list1!=NULL){
            temp->next=list1;
            list1=list1->next;
        }
        while(list2!=NULL){
            temp->next=list2;
            list2=list2->next;
        }
        return final;
        }
    }  
};
int main(){
    Solution S1;
    ListNode *list1;
    ListNode *list2;
    ListNode *list3;
    list1->val=-9;
    list1->next->val=3;
    list1->val=-5;
    list1->next->val=7;
    list3 = S1.mergeTwoLists(list1,list2);
    while(list3->next!=NULL){
        cout<<list3->val;
        list3=list3->next;
    }
}