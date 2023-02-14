#include<stdio.h>

void main() {
    unsigned int a;
    printf("Enter number: ");
    scanf("%d", &a);
    if (a >= 32768) {
        printf("negative");
    } else {
        printf("positive");
    }
}