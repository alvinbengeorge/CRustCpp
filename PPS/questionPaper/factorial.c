#include<stdio.h>

int main() {
    int n, f=1;
    printf("Enter a number for factorial: ");
    scanf("%d", &n);
    for (int i=n; i>=1; i--) {
        f*=i;
    }
    printf("Factorial: %d", f);
}