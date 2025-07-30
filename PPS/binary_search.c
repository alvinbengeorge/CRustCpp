#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 10, mid;
    int low=0, high=10;
    while (low <= high) {
        mid = (int)((low + high) / 2);
        if (arr[mid] == target) {
            printf("found in %d", mid);
            return 0;
        }
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
    }
    printf("not found");
    

    return 0;
}
