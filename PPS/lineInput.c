#include <stdio.h>
#include <string.h>

int main()
{
    char c[200];
    printf("Enter a string: ");
    fgets(c, 200, stdin);
    printf("%s", c);
    
}