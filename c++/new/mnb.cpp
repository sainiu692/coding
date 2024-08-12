#include <iostream> 
#include <stack>
 using namespace std; 
 class Stack
{
private:
    stack<int> s;
    int capacity;

public:
    Stack(int capacity)
    {
        this->capacity = capacity;
    }
    bool isEmpty()
    {
        return s.empty();
    }
    bool isFull()
    {
        return s.size() == capacity;
    }
    int topElement()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot return top element." << endl;
            return -1;
        }
        return s.top();
    }
    void push(int element)
    {
        if (isFull())
        {
            cout << "Stack is full. Cannot push element." << endl;
            return;
        }
        s.push(element);
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot pop element." << endl;
            return;
        }
        s.pop();
    }
};
int main()
{
    Stack stack(5); // Create a stack with capacity 5
    cout << "Is stack empty or not: " << (stack.isEmpty() ? "Yes" : "No") << endl;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout << "Top element in stack is : " << stack.topElement() << endl;
    stack.pop();
    cout << "Top element after pop in stack is: " << stack.topElement() << endl;
    stack.push(40);
    stack.push(50);
    cout << "Is stack full or  not : " << (stack.isFull() ? "Yes" : "No") << endl;
    return 0;
}
