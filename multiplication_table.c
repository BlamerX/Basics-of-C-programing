#include <stdio.h>
int main()
{
    int i, j;
    printf("Enter the number whose table is made: ");
    scanf("%d", &j);
    printf("---------->The table of a %d is<-----------\n", j);
    for (i = 1; i <= 10; i++)
    {
        int multi = i * j;
        printf("%d*%d=%d\n", j, i, multi);
    }
    printf("---------->The table of a %d in reverse is<-----------\n", j);
    for (i = 10; i >= 1; i--)
    {
        int multi = i * j;
        printf("%d*%d=%d\n", j, i, multi);
    }
    return 0;
}