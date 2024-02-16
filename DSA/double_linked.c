#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev
};

void print(struct node *head) {
    struct node *temp;
    temp = head;
    while(temp) {
        printf("%d ", temp->data);
        temp = temp -> next;
    }
    printf("\n");
}

int main() {
    struct node *head, *newnode, *tail;
    head = NULL;
    int choice = 1;
    while(choice) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Data: ");
        scanf("%d", &newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;
        if (!head) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        printf("Continue??\n");
        scanf("%d", &choice);
        printf("\n");
    }
    print(head);
    // insert_begin
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Insert Data");
    scanf("%d", &newnode->data);
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
    print(head);
    
    return 0;
}
