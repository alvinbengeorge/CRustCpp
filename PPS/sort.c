#include <stdio.h>

int *sort(int *a) {
    int temp;
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a;
}

int main() {
    int a[10];
    for (int i = 0; i < 10; i++) {
        printf("\nEnter a number: ");
        scanf("%d", &a[i]);
    }
    int *b = sort(a);
    printf("\n\nSorted array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}