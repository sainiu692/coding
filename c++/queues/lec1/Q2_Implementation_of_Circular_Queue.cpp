#include <iostream>
using namespace std;
// class CircularQueue{
//     public:
//     int size;
//     int *arr;
//     int front;
//     int rear;
//     // Constructor
//     CircularQueue(int n){
//         size = n;
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }
//     void push(int data){
//         // Queue Full
//         if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
//             cout<<"Full queue";
//         }
//         // Single element case
//         else if(front == -1){
//             front = rear = 0;
//             arr[rear] = data;
//         }
//         // Circular nature
//         else if(front!=0 && rear == size-1){
//             rear = 0;
//         }
//         // Normal flow
//         else{
//             arr[rear] = data;
//             rear++;
//         }
//     }
//     void pop(){
//         // Empty check
//         if(front == -1){
//             cout<<"Queue is empty"<<endl;
//         }
//         // Single element
//         else if(front == rear){
//             arr[front] = -1;
//             front = rear = -1;
//         }
//         // Circular nature
//         else if(front == size-1){
//             front = 0;
//         }
//         // Normal flow
//         else{
//             front++;
//         }
//     }
// };
class circularQueue
{
public:
    int size;
    int *arr;
    int front;
    int rear;
    circularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    bool isEmpty()
    {
        return front== -1;
    }
    bool isFull()
    {
        return (rear+1)%size==front;
    }
    void push(int data)
    {
        // empty
        if(isEmpty())
        {
          front=rear=0;
          cout<<"pushed value"<<data<<"in stack"<<endl;
          arr[rear]=data;  
          return;
        }
        // full
        else if(isFull())
        {
            cout<<"overflow"<<endl;
            return;
        }
        else{
            cout<<"pushed value"<<data<<"in stack"<<endl;
            rear=(rear+1)%size;
            arr[rear]=data;
        }
    }
    void pop()
    {
        // empty
        if(isEmpty())
        {
            cout<<"underflow"<<endl;
            return;
        }
        // pop kar do
        else
        {
           if(front==rear)
           {
            front=rear=-1;
            return;
           }
           else{
            cout<<" popped value"<<arr[front]<<"from stack"<<endl;
            front=(front+1)%size;
           }
        }
    }
    int getFront()
    {
        if(isEmpty())
        {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
    
};
int main()
{
    // Creation of queue
    circularQueue q(4);
    // Pushing in queue
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.pop();
    q.push(6);
    
    cout << "Front element = " << q.getFront()<<endl;;
    // Checking empty
    // if (q.isEmpty())
    // {
    //     cout << "Empty queue" << endl;
    // }
    // else
    // {
    //     cout << "Not empty" << endl;
    // }
    return 0;
}