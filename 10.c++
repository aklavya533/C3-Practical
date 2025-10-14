//Searching for an element in a singly linked list. 
#include <iostream>
using namespace std;

// ---------- Singly Linked List ----------
struct SNode {
    int data;
    SNode* next;
};
bool searchSLL(SNode* head, int key) {
    while (head) {
        if (head->data == key) return true;
        head = head->next;
    }
    return false;
}

// ---------- Doubly Linked List ----------
struct DNode {
    int data;
    DNode *next, *prev;
};
bool searchDLL(DNode* head, int key) {
    while (head) {
        if (head->data == key) return true;
        head = head->next;
    }
    return false;
}

// ---------- Circular Linked List ----------
struct CNode {
    int data;
    CNode* next;
};
bool searchCLL(CNode* head, int key) {
    if (!head) return false;
    CNode* temp = head;
    do {
        if (temp->data == key) return true;
        temp = temp->next;
    } while (temp != head);
    return false;
}

// ---------- MAIN ----------
int main() {
    // Singly Linked List: 10 -> 20 -> 30
    SNode *s1 = new SNode{10, NULL};
    s1->next = new SNode{20, new SNode{30, NULL}};
    cout << "Singly Linked List Search 20: " << (searchSLL(s1, 20) ? "Found" : "Not Found") << endl;

    // Doubly Linked List: 1 <-> 2 <-> 3
    DNode *d1 = new DNode{1, NULL, NULL};
    DNode *d2 = new DNode{2, NULL, d1};
    DNode *d3 = new DNode{3, NULL, d2};
    d1->next = d2; d2->next = d3;
    cout << "Doubly Linked LIst Search 4: " << (searchDLL(d1, 4) ? "Found" : "Not Found") << endl;

    // Circular Linked List: 5 -> 6 -> 7 -> back to 5
    CNode *c1 = new CNode{5, NULL};
    CNode *c2 = new CNode{6, NULL};
    CNode *c3 = new CNode{7, NULL};
    c1->next = c2; c2->next = c3; c3->next = c1;
    cout << "Circular Linked List Search 6: " << (searchCLL(c1, 6) ? "Found" : "Not Found") << endl;

    return 0;
}
