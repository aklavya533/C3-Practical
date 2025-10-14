//Implement STACK using Linked List.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top = NULL;
public:
    void push(int x) {
        Node* n = new Node{x, top};
        top = n;
    }
    void pop() {
        if(!top) { cout<<"Underflow!\n"; return; }
        Node* t = top;
        top = top->next;
        delete t;
    }
    void display() {
        for(Node* t = top; t; t = t->next) cout<<t->data<<" ";
        cout<<"\n";
    }
};

int main() {
    Stack s;
    s.push(10); s.push(20); s.push(30);
    s.display();    // 30 20 10
    s.pop();
    s.display();    // 20 10
}
