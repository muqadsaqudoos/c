#include<stdio.h>

int main(){
    int c;
    float f;
    printf("Enter in celcius: ");
    scanf("%d",&c);
    f = (9.0/5.0)*c+32;
    printf("In farehnite is %f",f);
    return 0;
}