#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *insertionAtHead(struct Node *first) {
    struct Node *newnode;
    newnode = (struct Node*)malloc(sizeof (struct Node));
    printf("\nEnter Data: ");
    scanf("%d",&newnode->data);
    newnode->next = first;
    first = newnode;
    return first;
}

struct Node *insertionAtIndex(struct Node *first) {
    struct Node *temp=NULL, *newnode;
    int n;
    printf("\nEnter index value: ");
    scanf("%d",&n);
    printf("\nEnter data: ");
    scanf("%d",&newnode->data);
    temp=first;
    while (temp->data!=n){
        temp=temp->next;
    }
    if(temp->data==n){
        newnode->next = temp->next;
        temp->next = newnode;
    }
    return first;
}

struct Node *insertionAtEnd(struct Node *first) {
    struct Node *newnode, *temp;
    newnode = (struct Node*)malloc(sizeof (struct Node));
    printf("\nEnter data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if (first == NULL){
        first = newnode;
    }else{
        temp = first;
        while (temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }

    return first;
}

void display(struct Node *first){
    while (first!=NULL){
        printf("\t%d",first->data);
        first = first->next;
    }
}

void main(){
    struct Node *head=NULL;
    int ch;
    printf("1. Insert at beginning. \n");
    printf("2. Insert at index. \n");
    printf("3. Insert at end. \n");
    printf("4. Display. \n");
    printf("5. Exit. \n");

    while (1){
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: head = insertionAtHead(head);
                break;

            case 2: head = insertionAtIndex(head);
                break;

            case 3: head = insertionAtEnd(head);
                break;

            case 4: display(head);
                break;

            case 5: exit(0);
                break;

            default: printf("\nEnter appropriate choice!!!");
                break;
        }
    }
}