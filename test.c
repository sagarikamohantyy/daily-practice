#include <stdio.h>
#include <stdlib.h>

//structure of a doubly linked list node
struct node {
    int data;
    struct node* prev;
    struct node* next;
};

// Function to create a new node
struct node* createNode(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = NULL;
    return newnode;
}

// Function to insert a new node at the end of the list
void insertAtEnd(struct node** head, struct node** tail, int value) {
    struct node* newnode = createNode(value);
    if (*head == NULL) {  // If the list is empty
        *head = newnode;
        *tail = newnode;
    } else {  // If the list is not empty
        (*tail)->next = newnode;
        newnode->prev = *tail;
        *tail = newnode;
    }
}

// Function to print the doubly linked list
void printList(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct node* head = NULL;
    struct node* tail = NULL;
    int n, value;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        insertAtEnd(&head, &tail, value);
    }

    printf("Doubly linked list: ");
    printList(head);

    return 0;
}
