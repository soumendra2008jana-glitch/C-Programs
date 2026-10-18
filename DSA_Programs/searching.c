#include<stdio.h>


// This is linear searching method...

int search(int arr[], int size, int n){
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            // printf("Element found!");
            return i+1;
        }
        
    }
    // printf("Element not found!");
    return -1;
    
}

int main()
{
    int n, index;
    int digits[10] = {23,54,32,67,89,56,12,90,45,34};
    printf("Enter your search value: ");
    scanf("%d", &n);
    index = search(digits, 10, n);
    printf("Element found at position %d", index);

    return 0;
}