#include <stdlib.h>

int getLength(int *a)
{
    return sizeof(a) / sizeof(int);
}

int *insert(int *a, int val, int pos)
{
    int length = getLength(a);
    int b[length + 1];
    for (int i = 0; i<(length+1); i++) {
        if (i < pos) b[i] = a[i];
        else b[i+1] = a[i];
    }
    b[pos] = val;
    return b;
}

int main()
{
    return 0;
}