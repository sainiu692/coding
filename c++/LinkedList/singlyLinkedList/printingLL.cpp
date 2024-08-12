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
        cout << "im here" << endl;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// print function
void print(node *&head)    //  & marji h lgao ya na
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
    node n;
    // creation of nodes of linked list ,
    // actually we create here objects dynamically
    node *first = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    // connecting them
    first->next = second;
    second->next = third;

    // printing linked list
    print(first);

    return 0;
}