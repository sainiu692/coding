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
int findLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    cout << " lenth is: " << len << endl;
    return len;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    // m yha temp!= NULL ki jgah temp->next!=NULL kyo ni kr para
    // kyoki ye yha temp->next ko temp se agli node samhjta hai

    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);    
    Node *third = new Node(30);

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;
    print(first);
    findLength(first);
    return 0;
}