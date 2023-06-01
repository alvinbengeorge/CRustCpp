#include<stdio.h>
#include<string.h>

char sendChar(char a) {
    a = tolower(a);
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        return '*';
    } else {
        return a;
    }
}

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", &s);
    int l = strlen(s);
    for (int i=0; i<l; i++) {
        printf("%c", sendChar(s[i]));
    }
}