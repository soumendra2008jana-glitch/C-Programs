#include<stdio.h>

void instr_sort(int arr[], int n){
    int min_ele, i, j, temp;
    
    for(i=0; i<n-1;i++){
        min_ele = i;
        for(j=i+1; j<n;j++){
            if(arr[min_ele] > arr[j]){
                min_ele = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_ele];
        arr[min_ele] = temp;
    }

    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

}

int main()
{
    int digit[] = {23,10,25,63,14,24,20};
    instr_sort(digit, 7);
}