#include<stdio.h>

int traverse(int arr[]){
    int i,j, size = 10;

    // Traversing Array
    
    for(i=0; i< size; i++){
        printf("%d ", arr[i]);
    }
}

int main()
{
    int digits[10] = {23,54,32,67,89,56,12,90,45,34};
    traverse(digits);
}