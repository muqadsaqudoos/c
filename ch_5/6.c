#include<stdio.h>

void pattern(int);

void pattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
int main(){
    int a= 3;
    pattern(a);


    
    return 0;
}