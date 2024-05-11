#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

struct node *enqueue(int data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if (front == NULL) {
        rear = front = newnode;
    } else {
        rear->next = newnode;
        rear = newnode;
    }
    printf("Enqueued %d\n", data);
    return newnode;
}

int dequeue() {
    if (front == NULL) {
        printf("Empty Queue");
        return -1;
    }
    struct node *temp = front;
    front = front->next;
    int num = temp->data;
    free(temp);
    printf("Dequeued %d\n", num);
    return num;
}

void display_queue() {
    struct node *temp = front;
    while(temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("\nCompleted\n");
}

int main() {
    for(int i=0; i<5; i++) enqueue(i);
    display_queue();
    for(int i=0; i<3; i++) dequeue();
    display_queue();

    return 0;
}