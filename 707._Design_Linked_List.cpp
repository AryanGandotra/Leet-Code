struct Node
{
    int val;
    Node *next;
    Node(int v) : val(v), next(nullptr) {}
};

class MyLinkedList
{
public:
    Node *head;
    Node *tail;
    int length;

    MyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
        length = 0;
    }

    int get(int index)
    {
        if (index < 0 || index >= length)
            return -1;
        Node *temp = head;
        if (index < length)
            for (int i = 0; i < index; i++)
                temp = temp->next;

        return temp->val;
    }

    void addAtHead(int val)
    {
        Node *node = new Node(val);
        node->next = head;
        head = node;
        if (tail == nullptr)
            tail = node;
        length++;
    }

    void addAtTail(int val)
    {
        Node *node = new Node(val);
        if (tail == nullptr)
        {
            head = tail = node;
        }
        else
        {
            tail->next = node;
            tail = node;
        }
        length++;
    }

    void addAtIndex(int index, int val)
    {
        if (index < 0 || index > length)
            return;
        if (index == 0)
        {
            addAtHead(val);
            return;
        }
        if (index == length)
        {
            addAtTail(val);
            return;
        }

        Node *prev = head;
        for (int i = 0; i < index - 1; i++)
        {
            prev = prev->next;
        }
        Node *node = new Node(val);
        node->next = prev->next;
        prev->next = node;
        length++;
    }

    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= length)
            return;
        if (index == 0)
        {
            Node *temp = head;
            head = head->next;
            if (head == nullptr)
                tail = nullptr;
            delete temp;
        }
        else
        {
            Node *prev = head;
            for (int i = 0; i < index - 1; i++)
            {
                prev = prev->next;
            }
            Node *toDelete = prev->next;
            prev->next = toDelete->next;
            if (toDelete == tail)
                tail = prev;
            delete toDelete;
        }
        length--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */