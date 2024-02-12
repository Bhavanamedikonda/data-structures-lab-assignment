#include <stdio.h>

int main() {
    int arr[100], size, i, key;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d.\n", i);
            break;
        }
    }

    if (i == size) {
        printf("Element not found in the array.\n");
    }

    return 0;
}

