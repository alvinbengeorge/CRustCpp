#include <stdio.h>

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter a number: ");
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("\n\nMaximum: %d", max);
}