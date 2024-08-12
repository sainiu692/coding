#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class queue
{
    node *front;
    node *rear;

public:
    queue()
    {
        front = rear = NULL;
    }
    bool isEmpty()
    {
        return front == NULL;
    }
    void push(int data)
    {
        if (isEmpty())
        {
            rear = front = new node(data);
             cout << "pushed value is" << front->data << endl;
            return;
        }
        else
        {
            rear->next = new node(data);
            if(rear->next==NULL){
                cout<<"queue overflow"<<endl;
                return;
            }
            cout << "pushed value is" << data << endl;
            rear = rear->next;
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "queue is empty cannot pop" << endl;
            return;
        }
        else
        {
            cout << "popped value is" << front->data << endl;

            node *temp = front;
            front = front->next;
            delete temp;
        }
    }
    int getFront()
    {
        if (isEmpty())
        {
            cout << "qeue is empty" << endl;
            return -1;
        }
        else
            return front->data;
    }
};
int main()
{
    queue q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.pop();
    q.pop();
    q.pop();
    return 0;
}