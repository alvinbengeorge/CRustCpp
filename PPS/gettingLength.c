#include <stdio.h>
#include <string.h>

int main() {
    char c[] = "Hello world";
    printf("%d", sizeof(c) / sizeof(char));
}