//Singly linked list
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void printList(struct Node* n) {
    struct Node* ptr = n;
    while (ptr) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
void insert(struct Node** head_ref, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
struct Node* copyList(struct Node* head) {
    if (head == NULL){
     return NULL;
    }
    else {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = head->data;
        newNode->next = copyList(head->next);
        return newNode;
    }
}
struct Node* create (int arr[], int n) {
    struct Node* head = NULL;
    for (int i = n - 1; i >= 0; i--) {
        insert(&head, arr[i]);
    }
    return head;
}
void printLists(struct Node* head_ref, struct Node* deep) {
    printf("\nOriginal list: ");
    printList(head_ref);
    printf("\nDuplicate list: ");
    printList(deep);
}
int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    struct Node* head_ref = create(arr, n);
    struct Node* deep = copyList(head_ref);
    printLists(head_ref, deep);
    return 0;
}