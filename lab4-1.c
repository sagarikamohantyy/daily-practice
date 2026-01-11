///insertion of a node in linked list-1
#include<stdio.h>
#include<stdlib.h>
int n,i;
for(int j=0; j<n; j++){
    newnode=(struct node*)malloc(sizeof(struct node));
    head->data=i;
    head->next=NULL;
    head->prev=NULL;
    if(newnode==NULL){
        break;
    }
    else{
        newnode-> data =i;
        newnode->prev=NULL;
        newnode->next=NULL;
        head=newnode;
        tail=newnode;
        tail=temp;
    }
}
struct node * , newnode, *head, *temp, tail;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=value;
newnode->prev=NULL;
newnode->next=NULL;

temp->next=newnode;
newnode ->prev=temp;
newnode ->next=temp->next->prev;

newnode ->next=temp->next->prev;
temp ->next=newnode;
temp ->next ->prev=newnode;
temp ->next=newnode;

/// reversing a linked list-3
current=head;
prev=NULL;
link=current->next;
current->next=prev;
prev=current;
current=link;

/// deletion of a node in the linked list-2
ptr=temp->next;
temp->next=temp->next->next;
free(ptr);

//// find if there is any loop in the linked list-4
/// given a linked list sort the linked list-5