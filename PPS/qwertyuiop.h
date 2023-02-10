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

// function to find a cube root of a number
int cubeRoot(int n)
{
    int start = 0, end = n;
    int mid;
    int ans = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (mid * mid * mid == n)
        {
            return mid;
        }
        if (mid * mid * mid < n)
        {
            start = mid + 1;
            ans = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}