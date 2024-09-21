#include<stdio.h>

int main(){
    char ch;
    printf("Enter a ch: ");
    scanf("%c",&ch);

    if (ch>=97 && ch<=122){
        printf("it is lowercase");
    }
    else{
        printf("it is not lowercase");
    }
    return 0;
}