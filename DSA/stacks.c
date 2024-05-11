#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int arr[MAX], top;

void initialize_stack()  {
    for (int i=0; i<MAX; i++)
    arr[i] = 0;
    top=-1;
}

void push(int data) {
    if (top > MAX) {
        printf("Overflow");
        return;
    }
    arr[++top] = data;
}

int pop() {
    if (top == -1) {
        printf("Underflow");
        return -1;
    }
    int temp = arr[top--];
    arr[top+1] = 0;
    return temp;
}

int peek() {
    if (top == -1) {
        printf("Underflow");
        return -1;
    }
    return arr[top];
}

int main() {
    initialize_stack();
    push(5);
    push(10);
    push(15);
    push(20);
    push(25);
    for (int i=0; i<3; i++) {
        printf("%d ", pop());
    }
    printf("%d", peek());
    return 0;
}