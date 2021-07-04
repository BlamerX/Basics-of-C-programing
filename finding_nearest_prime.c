#include <stdio.h>
int main()
{
    int i, j, n;
    printf("The value of n is: ");
    scanf("%d", &n);

    for (i = n + 1;; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
        {
            printf("The next nearest prime is:%d", i);
            break;
        }
    }
    for (i = n + 1;; i--)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
        {
            printf("\nThe previous nearest prime was:%d", i);
            break;
        }
    }
    return 0;
}