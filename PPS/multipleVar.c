// getting 4 integers from a single line input and printing them
#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter 4 integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d %d %d %d", a, b, c, d);
    return 0;
}