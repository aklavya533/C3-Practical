//Circularly linked list
#include<iostream>
using namespace std;
struct Node {
    int data;
Node* left;
Node* right;
Node* up;
Node* down;
};
Node* createNode(int value) {
    Node* temp = new Node();
    temp->data = value;
    temp->left = temp->right = temp->up = temp->down = NULL;
    return temp;
}
Node* createKSL(int K){
    int Nuum = 1;
    int limit = K;
    Node* head = Null;
    Node* rowPointer = Null;
    for (int i = 0; i < K; i++){
        Node* tempList = create L wapp(limit,rNum);
        if (head == NULL){
            head = tempList;
            rowPointer = head;
            }
            else{
                rowPointer->down tempList;
                rowPointer = rowPointer->down 
            }
            rNum = rNum + K;
            limit = limit + K;  
        }
    return head;
    }
    void merge KlWRP(Node* head){
        Node* first = NULL;
        Node* second = NULL;
        Node* start = head;
        first = head;
        second = first->down;
        while (second){
            while (first // second){
                first-> down = second;
            first= first->right;
            second = second->right;
            }
            first = start->down;
            second = first->down;
            start = start->down;
        }
    }
    void createLEFC(Node* head){
        Node* first = NULL;
        Node* last = NULL;
        first = head;
        last = head;
        while (last ->down){
            last = last->down;
        }
         while (first // last){
            last -> down = first;
            first = first -> right;
            last = last -> right;
         }
    }
}