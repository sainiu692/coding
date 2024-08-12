#include <iostream>
using namespace std;
// class Queue{
//     public:
//     int *arr;
//     int front;
//     int rear;
//     int size;
//     // Constructor
//     Queue(int n){
//         size = n;
//         front = 0;
//         rear = 0;
//         arr = new int[size];
//     }
//     // Push function
//     void push(int data){
//         // Check full or not
//         if(rear == size){
//             cout<<"Full queue";
//         }
//         else{
//             // Not empty queue
//             arr[rear] = data;
//             rear++;
//         }
//     }
//     // Pop function
//     void pop(){
//         // Check empty
//         if(front == rear){
//             cout<<"Empty queue";
//         }
//         else{
//             front++;
//             if(front == rear){
//                 // empty queue and restore original queue
//                 front = 0;
//                 rear = 0;
//             }
//         }
//     }
//     // getFront function
//     int getFront(){
//         // Check empty
//         if(front == rear){
//             return -1; // -1 indicates empty
//         }
//         else{
//             return arr[front];
//         }
//     }
//     // get size function
//     int getSize(){
//         return rear - front;
//     }
//     // empty or not
//     bool isEmpty(){
//         if(front == rear){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
class queue
{
public:
    int size;
    int *arr;
    int front;
    int rear;
    queue(int n)
    {
        this->size = n;
        front = 0;
        rear = 0;
        arr = new int[size];
    }
    void push(int data)
    {
        // queue is full
        if (rear == size)
        {
            cout << "queue is full!!" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    void pop()
    {
        // queue is empty
        if (front == rear)
        {
            cout << " queue is already empty!!" << endl;
        }
        else
        {
            arr[front]= -1;
            front++;
            // if queue is empty restore ton original queue
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }
    // getFront function
    int getFront()
    {
        if (front == rear)
        {
            cout << " queue is empty!!" << endl;
            return -1;
        }
        else
            return arr[front];
    }
    int getSize()
    {
        return rear-front;
    }
    bool isEmpty(){
        if(front==rear){
            //empty queue
            return true;
        }
        else return false;
    }
};
int main()
{
    // Creation of queue
    queue q(10);
    // Pushing in queue
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    // Checking size of queue
    cout << "Size of queue = " << q.getSize() << endl;
    // Removal
    q.pop();
    cout << "Size of queue = " << q.getSize() << endl;
    // Getting front element
    cout << "Front element = " << q.getFront()<<endl;;
    // Checking empty
    if (q.isEmpty())
    {
        cout << "Empty queue" << endl;
    }
    else
    {
        cout << "Not empty" << endl;
    }
    return 0;
}