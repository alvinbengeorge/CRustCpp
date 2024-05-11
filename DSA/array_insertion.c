#include <stdio.h>

int main() {
    int arr[50], size, i, pos, data;
    printf("Enter size:");
    scanf("%d", &size);
    printf("Enter elements: ");
    for (i=0; i<size; i++) scanf("%d", &arr[i]);
    if (size > 50) {
        printf("Memory full");
    } else {
        printf("Enter data: ");
        scanf("%d", &data);
        printf("Enter position: ");
        scanf("%d", &pos);
        for(i=size-1; i>=pos; i--)
        arr[i+1] = arr[i];
        arr[pos] = data;
        
    }
    printf("Elements are: \n");
    for(i=0;i<size;i++) printf("%d ", arr[i]);
}