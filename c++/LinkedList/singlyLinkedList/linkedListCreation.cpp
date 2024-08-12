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
        cout<<"im here";
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int main()
{
    node n;
    // creation of nodes of linked list ,
    //actually we create here objects dynamically
    node *first = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    // connecting them
    first->next = second;
    second->next = third;
    return 0;
}