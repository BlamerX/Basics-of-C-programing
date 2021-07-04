#include <stdio.h>
int dis(int no)
{
    int i, c = 1;
    for (i = 1; i <= no; i++)
    {
        c = 2 * c;
        printf("%d\t", c);
    }
}

int dis1(int no)
{
    int i;
    double c = 2;
    for (i = 1; i <= no; i++)
    {
        c = c * c;
        printf("%d\t", c);
    }
}

int main()
{
    // 2 4 8 16 32 ............... upto n.
    int a;
    printf("Enter the no of elements in the series: ");
    scanf("%d", &a);
    dis(a);
    printf("\n\n");
    dis1(a);
}