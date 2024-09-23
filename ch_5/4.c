#include<stdio.h>
//0,1,1,2,3,5,8,13,21,34...
int fabonacci(int);

int fabonacci(int a){
    if (a == 1){
        return 0;
    }
    else if (a==2){
        return 1;
    }
    return fabonacci(a-1) + fabonacci(a-2);
}

int main(){
    int n = 5;
    printf("%d",fabonacci(n));
    return 0;
}