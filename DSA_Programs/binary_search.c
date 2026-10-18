#include <stdio.h>

int binary_search(int arr[], int size, int element) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == element) {
            return mid;
        } else if (arr[mid] > element) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {1, 5, 6, 8, 10, 15, 20, 30, 36, 42};
    int ele, size = sizeof(arr) / sizeof(arr[0]); // Calculated in main before decay

    printf("Tell me your element: ");
    scanf("%d", &ele);

    int index = binary_search(arr, size, ele);

    if (index != -1) {
        printf("Your value is at index %d\n", index);
    } else {
        printf("Element not found\n");
    }

    return 0;
}