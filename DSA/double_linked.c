#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev
};

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
    }
    struct node *temp;
    temp = head;
    while (temp) {
        printf("%d,", temp->data);
        temp=temp->next;
    }
    
    return 0;
}
