#include<stdio.h>

int sum_of_sq(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i*i;
    }

    return sum;
}

int main(){
    int num = 10;
    printf("The square of the number %d is = %d", num, sum_of_sq(num));
}