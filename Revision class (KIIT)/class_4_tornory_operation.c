#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter the 5 numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    int f, g, h;
    f = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    g = (d > e) ? d : e;
    h = (f > g) ? f : g;
    printf("the largest number among %d,%d,%d,%d,%d is %d", a, b, c, d, e, h);
}