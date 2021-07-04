#include <stdio.h>
int main()
{
    int x, y, z;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("Enter the value of z: ");
    scanf("%d", &z);

    printf("the vlaue of x^2 + 3x^3y + 4xy - 4y + 7 is: ");
    printf("%d\n", (x * x) + (3 * (x * x * x) * y) + (4 * (x * y)) - (4 * y) + 7);

    printf("\n");
    // display of pattern
    printf("\t\t%d\n", x);
    printf("\t%d\t\t%d\n", y, (y * y));
    printf("%d\t\t%d\t\t%d\n", z, (z * z), (z * z * z));
    printf("\t%d\t\t%d\n", y, (y * y));
    printf("\t\t%d\n", x);
}