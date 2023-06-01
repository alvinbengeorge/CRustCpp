#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    print("Enter string: ");
    scanf("%s", &s);
    int l = strlen(s);
    for (int i=0; i<l/2; i++) {
        if (s[i] != s[l-i-1]) {
            printf("Not a palindrome");
            return 0;
        }
    }
    printf("Palindrome");
}