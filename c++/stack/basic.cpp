#include <iostream>
#include <stack>
using namespace std;
// class Stack
// {
// public:
//     int *arr;
//     int size;
//     int top;
//     Stack(int size)
//     {
//         arr = new int[size];
//         this->size = size;
//         top = -1;
//     }
//     void push(int data)
//     {
//         if (size - top > 1)
//         {
//             // space available
//             // insertion
//             top++;
//             arr[top] = data;
//         }
//         else
//         {
//             cout << "stack overflow!!" << endl;
//         }
//     }
//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "Stack Underflow!!!" << endl;
//         }
//         else
//         {
//             top--;
//         }
//     }
//     int getTop()
//     {
//         if (top == -1)
//         {
//             cout << "stack is empty!!" << endl;
//             return -1;
//         }
//         else
//         {
//             return arr[top];
//         }
//     }
//     // this getSize() returns the valid number of elements in stack
//     int getSize()
//     {
//         return top + 1;
//     }
//     bool isEmpty()
//     {
//         if (top == -1)
//         {
//             return true;
//         }
//         else
//             return false;
//     }
// };
void printMiddle(stack<int>&s, int &totalSize)
{
    if (s.size() == 0)
    {
        cout << "No element in stack!!" << endl;
        return;
    }
    // base case
    if ((totalSize / 2) + 1 == s.size())
    {
        cout << s.top();
        return;
    }
    int temp = s.top();
    s.pop();
    // recursive call
    printMiddle(s, totalSize);
    s.push(temp);
}
int main()
{

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    int totalSize = s.size();
    printMiddle(s, totalSize);
    return 0;
}