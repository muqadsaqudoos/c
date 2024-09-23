#include<stdio.h>

float cel_to_fare(int);

float cel_to_fare(int a){
    float f;
    f = a*(9.0/5.0) +32;
    printf("%f",f);
    return 0;
}
int main(){
    
    int c = 1;
    cel_to_fare(c);
    return 0;
}