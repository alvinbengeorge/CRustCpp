#include <string.h>
#include <stdlib.h>

int terminal(char *c)
{
    return system(c);
}

int lenstr(char *c)
{
    return strlen(c);
}

int factorial(int n)
{
    long int a = 1;
    for (int i = 1; i <= n; i++)
    {
        a = a * i;
    }
    return a;
}


