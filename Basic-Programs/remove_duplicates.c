#include <stdio.h>

void print_array(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int arr[] = {12, 53, 65, 23, 56, 23, 55, 53, 65, 86, 95, 65, 63};
    int n = sizeof(arr) / sizeof(arr[0]);

    int unique_arr[13];
    int unique_count = 0;

    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;

        // Check if arr[i] has already been added to unique_arr
        for (int j = 0; j < unique_count; j++) {
            if (arr[i] == unique_arr[j]) {
                is_duplicate = 1;
                break;
            }
        }

        // If not seen before, add it
        if (!is_duplicate) {
            unique_arr[unique_count] = arr[i];
            unique_count++;
        }
    }

    printf("Original array:\n");
    print_array(arr, n);

    printf("Unique elements (%d total):\n", unique_count);
    print_array(unique_arr, unique_count);

    return 0;
}