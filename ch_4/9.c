#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char a = 'T';
    for (int i = 2; (i < n/2); i++)
    {
        if (n%i == 0)
        {
            printf("%d is not prime number", n);
            a = 'F';
            break;
        }
    }
    if (a == 'T')
    {
        printf("%d is a prime number", n);
    }

    return 0;
}