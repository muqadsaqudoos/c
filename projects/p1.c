#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int num = rand() % 100 + 1;
    int count = 0;
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    while (1)
    {
        if (n > num)
        {
            printf("random number is smaller\n");
            printf("Enter again:\n");
            scanf("%d", &n);
            count++;
        }
        else if (n < num)
        {
            printf("random number is greater\n");
            printf("Enter again:\n");
            scanf("%d", &n);
            count++;
        }
        else
        {
            printf("%d", count);
            break;
        }
    }

    return 0;
}