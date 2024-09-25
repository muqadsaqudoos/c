#include<stdio.h>

int main(){
    int i = 5;
    int* ptr = &i;
    printf("The address of a is %u\n", &i);
    printf("The value of a is %d\n", *ptr);
    return 0;
}