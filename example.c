#include<stdio.h>
#include "ansi_escapes.h"

int main(){
    printf(ANSI_FG_BRIGHT_MAGENTA ANSI_BOLD "Hello World!");
    int a;
    scanf("%d",&a);
    return 0;
}