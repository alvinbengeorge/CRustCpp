#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void createLinkedList(int count) {
    struct node *temp = head;
    for (int i=0; i<count; i++) {        
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter value: ");
        scanf("%d", &newnode->data); // 1 
        newnode->next = NULL;
        if (head == NULL) {
            temp = head = newnode;            
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
}

void print() {
    struct node *temp = head;
    while (temp) {
        printf("%d -> ", temp->data);
        temp=temp->next;
    }
    printf("\nCompleted");
}

int main() {
    createLinkedList(5);
    print();
    return 0;
}