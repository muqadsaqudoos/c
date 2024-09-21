#include <stdio.h>

int main()
{
    int db, dv, os;
    printf("Enter db marks: ");
    scanf("%d", &db);
    printf("Enter dv marks: ");
    scanf("%d", &dv);
    printf("Enter os marks: ");
    scanf("%d", &os);

    if (db >= 33 && dv >= 33 && os >= 33)
    {
        printf("You have passed");
    }
    else if (((db + dv + os) / 3) * 100 >= 40)
    {
        printf("You have passed");
    }
    else
    {
        printf("You are Fail");
    }
    return 0;
}