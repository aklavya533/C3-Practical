#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
    Node *front = NULL, *rear = NULL;
public:
    void enqueue(int x) {
        Node* n = new Node{x, NULL};
        if(!rear) front = rear = n;
        else rear = rear->next = n;
    }
    void dequeue() {
        if(!front) { cout<<"Underflow!\n"; return; }
        Node* t = front;
        front = front->next;
        if(!front) rear = NULL;
        delete t;
    }
    void display() {
        for(Node* t = front; t; t = t->next) cout<<t->data<<" ";
        cout<<"\n";
    }
};

int main() {
    Queue q;
    q.enqueue(10); q.enqueue(20); q.enqueue(30);
    q.display();  
    q.dequeue();
    q.display(); 
}
