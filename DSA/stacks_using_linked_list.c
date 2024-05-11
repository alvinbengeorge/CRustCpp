#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *top = NULL;

void push(int data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL) {
        top = head = newnode;
    } else {
        struct node *temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newnode;
        top = newnode;
    }
    printf("Pushed %d\n", top->data);
}

void pop() {
    if (!head) {
        printf("Underflow");
        return;
    }
    struct node *temp = head;
    struct node *prev = head;
    while (temp->next) {
        if (temp != head) prev = prev->next;
        temp = temp->next;
    }
    prev->next = NULL;
    int num = temp->data;
    free(temp);
    top = prev;
    printf("Popped %d\n", num);
}

void display() {
    struct node *temp = head;
    while(temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}

int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    for(int i=0; i<30; i++) {
        push(i);
    }
    pop();
    pop();
    pop();
    display();
    return 0;
}