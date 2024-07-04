class Solution
{
public:
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *temp = head->next;
        ListNode *newHead = new ListNode(0);
        ListNode *temp2 = newHead;

        int currSum = 0;

        while (temp != nullptr)
        {
            if (temp->val != 0)
            {
                currSum += temp->val;
            }
            else
            {
                temp2->next = new ListNode(currSum);
                temp2 = temp2->next;
                currSum = 0;
            }
            temp = temp->next;
        }

        return newHead->next;
    }
};