#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5};
    int target = 5;
    for(int i=0; i<5; i++) {
        if (arr[i] == target) {
            printf("found");
            return 0;
        }
    }
    printf("not found");
    return 0;
}
