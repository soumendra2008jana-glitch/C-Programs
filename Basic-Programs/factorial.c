#include<stdio.h>

int factorial(int n){

    int fact = 1;

    if(n==0 || n==1){
        fact = 1;
        return 0;
    }else{
        fact = n * factorial(n-1);
    }

    return fact;

}

int main(){
    printf("%d", factorial(5));
}