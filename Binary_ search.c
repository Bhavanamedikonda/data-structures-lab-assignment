#include <stdio.h>

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 23;

    int left = 0, right = size - 1;
    int found = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        
        if (arr[mid] == key) {
            printf("Element is present at index %d\n", mid);
            found = 1;
            break;
        }
        
        else if (arr[mid] < key) {
            left = mid + 1;
        }
        
        else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("Element is not present in array\n");
    }

    return 0;
}


   
