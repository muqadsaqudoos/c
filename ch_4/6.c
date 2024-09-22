#include<stdio.h>

int main(){
    int sum = 0;
    int b;
    for(int i=1;i<=10;i++){
        b = i*8;
        sum += b;

    }
    printf("%d",sum);
    return 0;
}