#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}
int getLength(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }
    int length = getLength(head);
    cout << "Length is" << " " << length;
    cout << endl;
    if (position == length)
    {
        insertAtTail(head, tail, data);
        return;
    }
    // ab vo case agar kahi linked list ke bich mein
    // lgani ho node

    // step->1 == find prev
    Node *prev = head;
    int i = 1;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    Node *newNode = new Node(data);
    prev->next = newNode;
    newNode->next = curr;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
// deleting node from specific position
void deleteAtPosition(int position, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "Linked list is empty,can not perform operation" << endl;
        return;
    }
    if (position == 0)
    {
        cout << "Give valid position" << endl;
        return;
    }
    if (position == 1)
    {
        // we have to remove head of linked list
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = getLength(head);
    if (position == len)
    {
        // we have to remove tail of linked list
        int i = 1;
        Node *prev = head;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }
        prev->next = NULL;
        Node *temp = tail;
        tail = prev;
        delete temp;
        return;
    }
    // if we want to delete node bw head an tail
    int i = 1;
    Node *prev = head;

    while (i < position - 1)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = head;
    curr = prev->next->next;
    Node *temp = prev->next;
    prev->next = curr;
    temp->next = NULL;
    delete temp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Before Insertion: " << endl;
    print(head);
    cout << endl;
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);

    cout << "After Insertion at head and tail: " << endl;
    print(head);
    cout << endl;
    int position = 6;
    insertAtPosition(head, tail, position, 100);
    cout << "After Insertion at specified position: " << endl;
    print(head);
    cout << endl;
    position = 0;
    deleteAtPosition(position, head, tail);
    cout << "After deletion L.L is " << endl;
    print(head);
}