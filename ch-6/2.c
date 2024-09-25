#include<stdio.h>

int address(int* a){
    printf("The value of i is %d\n", a);    
    printf("The value at i is %d", *a);   
    return 5; 
}

int main(){
    int i = 7;
    int* ptr = &i;
    printf("The address of i is %u\n", &i);
    address(ptr);
    return 0;
}