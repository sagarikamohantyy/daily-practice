// create a singly linked list and traverse L1
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

int main(){
    int n;
    printf("How many node you want to create : ");
    scanf("%d",&n);

    struct node* newNode,*temp,*head;
    head=(struct node*)malloc(sizeof(struct node));
    
    if(head==NULL){
        printf("No memory is allocated");
        exit(0);
    }
    int p;
    printf("enter the value of data in head : ");
    scanf("%d",&p);
    head->data=p;
    head->next=NULL;
    temp=head; // temp is pointing to the head node
    
    for(int i=1;i<n;i++){
        newNode=(struct node*)malloc(sizeof (struct node));
        if(newNode==NULL){
            break;
    }
        else{
            int k;
            printf("enter the data in node %d : ",i+1);
            scanf("%d",&k);
            newNode->data=k;
            newNode->next=NULL;
            temp->next=newNode; // now in temp->next = address of newnode
            temp=newNode;  // updating the temp now it is pointing to the newnode for the upcoming newnode
            newNode=NULL;  
     }
}
    printf("\n");
    temp=head;
    while(temp!=NULL){
        printf("Data is %d\n ",temp->data);
        printf("Address is %p\n",temp->next);
        temp=temp->next;
    }
    return 0; 
}