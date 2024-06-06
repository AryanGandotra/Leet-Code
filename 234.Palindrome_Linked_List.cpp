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
    // Function to find the middle node of the linked list
    ListNode *getMiddle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        // Move slow pointer by 1 step and fast pointer by 2 steps until fast reaches the end
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Slow pointer will now be pointing to the middle node
        return slow;
    }

    // Function to reverse the linked list
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = NULL; // Previous node pointer
        ListNode *curr = head; // Current node pointer
        ListNode *next = NULL; // Next node pointer

        // Traverse the list and reverse the links
        while (curr != NULL)
        {
            next = curr->next; // Store next node
            curr->next = prev; // Reverse current node's pointer
            prev = curr;       // Move prev to current node
            curr = next;       // Move to next node
        }

        // Return new head of the reversed list
        return prev;
    }

    // Function to get the length of the linked list
    int getLength(ListNode *head)
    {
        int count = 0; // Initialize count

        // Traverse the list and count the nodes
        while (head != NULL)
        {
            count++;
            head = head->next;
        }

        return count; // Return the total count
    }

    // Function to check if the linked list is a palindrome
    bool isPalindrome(ListNode *head)
    {
        // Edge case: an empty list or a single node list is always a palindrome
        if (head == NULL || head->next == NULL)
        {
            return true;
        }

        // Find the middle of the list
        ListNode *middle = getMiddle(head);
        // Reverse the second half of the list
        ListNode *secondHalfStart = reverseList(middle);

        // Compare the first half and the reversed second half
        ListNode *firstHalfStart = head;
        ListNode *secondHalf = secondHalfStart;

        // Check each node in the first half against the corresponding node in the second half
        while (secondHalf != NULL)
        {
            if (firstHalfStart->val != secondHalf->val)
            {
                // If values don't match, it's not a palindrome
                // Restore the original list structure before returning false
                reverseList(secondHalfStart);
                return false;
            }
            firstHalfStart = firstHalfStart->next;
            secondHalf = secondHalf->next;
        }

        // Restore the original list structure
        reverseList(secondHalfStart);
        return true; // All values matched, it's a palindrome
    }
};

// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         stack<int> s;
//         ListNode* temp = head;

//         while(temp!=NULL){
//             s.push(temp->val);
//             temp=temp->next;
//         }

//         temp = head;

//         while(!s.empty()){
//             if(s.top()!= temp->val)
//                 return false;
//             s.pop();
//             temp=temp->next;
//         }

//         return true;
//     }
// };

// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         vector<int> v;
//         ListNode* cur = head;
//         while(cur){
//             v.push_back(cur->val);
//             cur = cur->next;
//         }
//         for(int i = 0; i < v.size()/2; i++){
//             if(v[i] != v[v.size()-1-i])
//                 return false;
//         }
//         return true;
//     }
// };