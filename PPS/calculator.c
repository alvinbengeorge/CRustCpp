#include <stdio.h>
#include "qwertyuiop.h"

void add()
{
    int a, b;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum => %d\n", (a + b));
}

void subtract () {
    int a, b;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Difference between %d and %d => %d\n", a, b, (a-b));
}

void multiply() {
    int a, b;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Product of %d and %d => %d\n", a, b, (a*b));
}

void divide() {
    int a, b;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Quotient of %d and %d => %d %d/%d\n", a, b, ((int)(a/b)), (a%b), b);
}

void fact() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Factorial of %d => %d\n", a, factorial(a));
}



void main() {
    printf("------------\n");
    printf("Enter: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Factorial\n");
    printf("6. Exit\n\n");

    int choice;
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        case 5:
            fact();
            break;
        case 6:
            printf("Exiting");
            exit(0);
        default:
            printf("Invalid option");
    }

}