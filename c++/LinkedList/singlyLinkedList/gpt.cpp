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

void insertAtTail(node *&head, node *&tail, int data)
{
    // create a node
    node *newNode = new node(data);
    // if the list is empty
    if (tail == NULL)
    {
        head = tail = newNode;
        return;
    }
    // tail's next points to newNode
    tail->next = newNode;
    // update tail to newNode
    tail = newNode;
}

void print(node *head)
{
    node *temp = head;
    // Stop when we reach NULL
    while (temp != NULL)
    {
        // Print the data
        cout << temp->data << " ";
        // Move temp to next node
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    insertAtTail(head, tail, 500);
    insertAtTail(head, tail, 60);

    print(head);

    return 0;
}
