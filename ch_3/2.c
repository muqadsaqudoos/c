#include <stdio.h>

int main()
{
    float income;
    printf("Enter income: ");
    scanf("%f", &income);

    if (income > 10.0)
    {
        printf("Tax paid is 30 percent");
    }
    else if (income > 5.0)
    {
        printf("Tax paid is 20 percent");
    }
    else
    {
        printf("Tax paid is 5 percent");
    }
    return 0;
}