#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no whose Table is to be constructed: ");
    scanf("%d", &n);
    printf("The multiplication of %d is:\n", n);
    int mul[n];
    for (int i = 0; i < 10; i++)
    {
        mul[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", n, i + 1, mul[i]);
    }
    return 0;
}