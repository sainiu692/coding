#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node()
    {
        this->data = 0;
        this->next = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(node *&head, int data)
{
    // create a node
    node *newNode = new node(data);
    // newNode ke next ko head par point kar do
    newNode->next = head;
    // head ko fir newNode par kar do
    head = newNode;
}
void insertAtTail(node *&tail, int data)
{
    // create a node
    node *newNode = new node(data);
    // tail ke next ko newNode par point kar do
    tail->next = newNode;
    // tail ko fir newNode par laga do
    tail = newNode;
}

void print(node *&head) //  & marji h lgao ya na
{
    node *temp = head;

    //  Step - 3 Stop when we reach NULL
    while (temp != NULL)
    {
        // Step - 1 Print
        cout << temp->data << " ";
        // Step - 2 Move temp to next
        temp = temp->next;
    }
}
int main()
{
    node *head = NULL;
    node *tail = new node(10);

    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);

    insertAtTail(tail, 500);
    insertAtTail(tail, 60);

    print(head);

    return 0;
}
