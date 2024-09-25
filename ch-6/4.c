#include<stdio.h>

int* sum(int a, int b){
    int s;
    s = a+b;
    int* ptr = &s;
    printf("The sum is %d\n",s);
    return ptr;
}

float* avg(int a, int b){
    float s;
    s = (a+b)/2.0;
    float* ptr = &s;
    printf("The avg is %f\n",s);
    return ptr;
}

int main(){
    int a= 4;
    int b= 5;
    int* ptr;
    float* ptr2;

    ptr = sum(a,b);
    ptr2 = avg(a,b);
    printf("The sum address is %u and avg address is %u",ptr,ptr2);

    return 0;
}