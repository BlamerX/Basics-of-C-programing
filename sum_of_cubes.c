#include <stdio.h>
int main()
{
    int i, n;
    printf("The value of n is: ");
    scanf("%d", &n);
    i = ((n * (n + 1)) * (n * (n + 1))) / 4;
    printf("%d", i);
    return 0;
}