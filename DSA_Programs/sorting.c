#include <stdio.h>

// Bubble Sort: Repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

int *bubble_sort(int arr[], int size)
{
    int i, j, temp;
    int swapped, tlc = 0;

    // Outer loop: runs (size - 1) passes
    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;

        // Inner loop: compares adjacent elements
        // The last 'i' elements are already in their correct positions
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
            tlc++;
        }

        // Optimization: if no two elements were swapped, array is already sorted
        if (swapped == 0)
        {
            break;
        }
    }
    printf("ToTal Loop Count %d\n", tlc);
    return arr;
}

int main()
{
    int n = 10;
    int digits[10] = {23, 54, 32, 67, 89, 56, 12, 90, 45, 34};
    int *p = bubble_sort(digits, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }

    return 0;
}
