#include<stdio.h>

int main(){
    int n;
    int fact = 1;
    scanf("%d",&n);
    int i = n;
    while(i>=1){
        fact *= i;
        i--;
    }
    printf("%d",fact);
    
    return 0;
}