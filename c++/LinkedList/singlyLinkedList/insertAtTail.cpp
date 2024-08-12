#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(){
            this->data = 0;
            this->next = NULL;
        }
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

// Insertion at tail case
void insertAtTail(Node* &tail,int data){
    // Empty linked list case
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        return;
    }
    // Step - 1
    Node* newNode = new Node(data);
    // Step - 2
    tail->next = newNode;
    // Step - 3
    tail = newNode;
}
void print(Node* &tail){
    Node* temp = tail;
    while(temp != NULL){ // Step - 3 Stop when we reach NULL
        // Step - 1 Print
        cout<<temp->data<<" ";
        // Step - 2 Move temp to next
        temp = temp->next;
    }
}
int main(){
    Node* tail = NULL;
    // insertAtHead(head,tail,20);
    // insertAtHead(head,tail,30);
    // insertAtHead(head,tail,40);
    // insertAtHead(head,tail,50);
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    print(tail);
    return 0;
}