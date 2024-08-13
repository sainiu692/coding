#include <iostream>
#include <queue>
using namespace std;
void printQueue(queue<int> q, int n)
{
    while (n--)
    {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    int n = q.size();
    // value print karao
    printQueue(q, n);
    cout << endl; 
    cout << "size of queue is: " << q.size();
    return 0;
}