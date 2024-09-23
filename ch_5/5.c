#include<stdio.h>

int sum_n(int);

int sum_n(int a){
    if (a==0){
        return 0;
    }
    return a + sum_n(a-1);

}
int main(){
    int a = 10;
    printf("%d",sum_n(a));
    
    return 0;
}