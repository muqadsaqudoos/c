#include<stdio.h>

float mass(float);

float mass(float m){
    return m*9.8;
}
int main(){
    int m = 45;
    printf("%f",mass(m));
    
    return 0;
}