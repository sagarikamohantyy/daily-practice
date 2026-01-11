// create node in linked list
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main() {
    int n;
    printf("How many nodes do you want to create: ");
    scanf("%d", &n);

    struct node* newNode, * temp, * head;
    head = (struct node*)malloc(sizeof(struct node));

    if (head == NULL) {
        printf("Memory allocation failed for head node\n");
        exit(0);
    }

    int p;
    printf("Enter the value of data in the head: ");
    scanf("%d", &p);
    head->data = p;
    head->next = NULL;
    temp = head; // temp is pointing to the head node

    for (int i = 1; i < n; i++) {
        newNode = (struct node*)malloc(sizeof(struct node));
        if (newNode == NULL) {
            printf("Memory allocation failed for node %d\n", i + 1);
            break;
        } 
        else {
            int k;
            printf("Enter the data in node %d: ", i + 1);
            scanf("%d", &k);
            newNode->data = k;
            newNode->next = NULL;
            temp->next = newNode; // linking the new node to the previous one
            temp = newNode;  // updating temp to point to the new node
        }
    }

    return 0;
}
