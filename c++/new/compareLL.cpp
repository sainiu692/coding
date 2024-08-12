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
bool compareLinkedLists(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    // Check if both lists have reached their end
    if (temp1 == NULL && temp2 == NULL)
    {
        return true; // dono list same length ki h and have same data
    }
    return false; // ek list badi h dusri se
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
int main()
{
    Node *head = new Node(10);
    Node *first = new Node(20);
    Node *second = new Node(30);
    head->next = first;
    first->next = second;
    cout << "first linked list is: " << endl;
    print(head);
    Node *head1 = new Node(10);
    Node *first1 = new Node(20);
    Node *second1 = new Node(30);
    Node *third1 = new Node(40);
    head1->next = first1;
    first1->next = second1;
    second1->next = third1;
    cout << endl;
    cout << "second linked list is: " << endl;
    print(head1);
    cout<<endl;
    if(compareLinkedLists(head, head1)){
        cout<<"linked list are same"<<endl;
    }
    else{
        cout<<"linked list are not same"<<endl;
    }
    return 0;
}