#include<stdio.h>

float average(int a,int b,int c);

float average(int a,int b,int c){
    printf("%f",(a+b+c)/3.0);
    return 0;
}
int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    average(a,b,c);
    
    return 0;
}