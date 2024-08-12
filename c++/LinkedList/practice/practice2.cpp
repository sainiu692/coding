#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node()
    {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
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
    head->prev = newNode;
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
    newNode->prev = tail;
    tail = newNode;
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
    if (position <= 0)
    {
        cout << "give valid position" << endl;
        return;
    }
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    int len = getLength(head);
    if (position == len)
    {
        insertAtTail(head, tail, data);
        return;
    }
    // if we want to insert a node bw head and tail.
    Node *newNode = new Node(data);
    int i = 1;
    Node *before = head;
    while (i < position)
    {
        before = before->next;
        i++;
    }
    Node *curr = before->next;
    before->next = newNode;
    newNode->prev = before;
    newNode->next = curr;
    curr->prev = newNode;
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
void deletion(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "linked list is empty" << endl;
        return;
    }
    if (position <= 0)
    {
        cout << "give valid position" << endl;
        return;
    }
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }
    int len = getLength(head);
    if (position == len)
    {
        Node *temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }
    // if i want to remove node bw head and tail
    int i = 1;
    Node *before = head;
    while (i < position - 1)
    {
        before = before->next;
        i++;
    }
    Node *temp = before->next;
    Node *curr = before->next->next;
    before->next = curr;
    curr->prev = before;
    temp->prev = NULL;
    temp->next = NULL;
    delete temp;
}

int main()
{
    Node *head = new Node(10);
    Node *tail = head;
    //    Node*first=new Node(20);
    //    Node*second=new Node(30);
    //    Node*third=new Node(40);
    //    head->next=first;
    //    first->prev=head;
    //    first->next=second;
    //    second->prev=first;
    //    second->next=third;
    //    third->prev=second;
    cout << "Linked List before insertion: " << endl;
    print(head);
    cout << endl;
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    cout << "Here is your doubly linked list after insertion!!!!" << endl;
    print(head);
    cout << endl;
    insertAtPosition(head, tail, 7, 90);
    cout << "Here is your doubly linked list after insertion at a specified position!!!!" << endl;
    print(head);
    cout << "After deletion linked list is!!" << endl;
    deletion(head, tail, 1);
    print(head);
    return 0;
}
