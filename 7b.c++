#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Function to create a new node
Node* getNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = newNode->prev = NULL;
    return newNode;
}

// Function to insert a node at the beginning
void push(Node*& head, int data) {
    Node* new_node = getNode(data);
    new_node->prev = NULL;
    new_node->next = head;
    if (head != NULL)
        head->prev = new_node;
    head = new_node;
}

// Recursive function to reverse the doubly linked list
Node* reverse(Node* node) {
    if (!node)
        return NULL;

    Node* temp = node->next;
    node->next = node->prev;
    node->prev = temp;

    // Base case: if prev is NULL, this is the new head
    if (node->prev == NULL)
        return node;

    // Recursive call
    return reverse(node->prev);
}

// Function to print the list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Main function
int main() {
    Node* head = NULL;

    // Creating DLL: 10 <-> 20 <-> 30 <-> 40
    push(head, 40);
    push(head, 30);
    push(head, 20);
    push(head, 10);

    cout << "Original list: ";
    printList(head);

    // Reverse using recursion
    head = reverse(head);

    cout << "Reversed list: ";
    printList(head);

    return 0;
}
