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
private:
    ListNode *getMiddle(ListNode *head)
    {
        if (head == NULL)
            return NULL;
        ListNode *slow = head;
        ListNode *fast = head->next;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode *merge(ListNode *left, ListNode *right)
    {
        ListNode temp;
        ListNode *tail = &temp;
        temp.next = NULL;

        while (left != NULL && right != NULL)
        {
            if (left->val < right->val)
            {
                tail->next = left;
                left = left->next;
            }
            else
            {
                tail->next = right;
                right = right->next;
            }
            tail = tail->next;
        }

        if (left != NULL)
        {
            tail->next = left;
        }
        else
        {
            tail->next = right;
        }

        return temp.next;
    }

public:
    ListNode *sortList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode *middle = getMiddle(head);

        ListNode *leftHead = head;
        ListNode *rightHead = middle->next;
        middle->next = NULL;

        leftHead = sortList(leftHead);
        rightHead = sortList(rightHead);

        return merge(leftHead, rightHead);
    }
};

// class Solution {
// public:
//     ListNode* sortList(ListNode* head) {
//         if(head==NULL || head->next==NULL){
//             return head;
//         }

//         vector<int> arr;

//         ListNode* temp = head;

//         while(temp!=NULL){
//             arr.push_back(temp->val);
//             temp=temp->next;
//         }

//         sort(arr.begin(),arr.end());

//         temp = head;

//         int i=0;

//         while(temp!=NULL){
//             temp->val = arr[i++];
//             temp=temp->next;
//         }

//         return head;
//     }
// };