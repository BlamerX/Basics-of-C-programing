#include <stdio.h>

int table(int no)
{
    int multi;
    for (int i = 1; i <= 10; i++)
    {
        printf("%dX%d=%d\n", no, i, no * i);
    }
    return 0;
}
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    table(a);
}