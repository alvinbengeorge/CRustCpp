// insert values into array

#include <stdio.h>

int main() {
    int a[10], i, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Elements in array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}