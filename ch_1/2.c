#include<stdio.h>

int main(){
    
    int radius;
    int height;
    printf("Enter radius: ");
    scanf("%d",&radius);

    printf("Enter height: ");
    scanf("%d",&height);

    printf("The area of circle is %f\n",3.14*radius*radius);
    printf("The voulume of cylinder is %f",3.14*radius*radius*height);

    return 0;
}