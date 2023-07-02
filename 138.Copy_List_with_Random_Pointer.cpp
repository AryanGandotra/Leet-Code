/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
public:
    void insertAtTail(Node *&temp, int data)
    {
        Node *p = new Node(data);
        temp->next = p;
        temp = p;
    }
    Node *copyRandomList(Node *head)
    {
        if (head == NULL)
            return NULL;

        unordered_map<Node *, Node *> map1;

        Node *p = head;

        Node *newNodehead = NULL;
        Node *newNodetail = NULL;

        while (p != NULL)
        {
            if (newNodehead == NULL)
            {
                Node *temp = new Node(p->val);
                newNodehead = temp;
                newNodetail = temp;
            }
            else
            {
                insertAtTail(newNodetail, p->val);
            }
            map1[p] = newNodetail;
            p = p->next;
        }

        Node *a = newNodehead;
        Node *b = head;

        while (a != NULL)
        {
            a->random = map1[b->random];
            a = a->next;
            b = b->next;
        }

        return newNodehead;
    }
};