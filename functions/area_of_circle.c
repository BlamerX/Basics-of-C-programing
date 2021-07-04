#include <stdio.h>
#include <math.h>
int main()
{
    int radius;
    printf("Enter the value of the radius\n");
    scanf("%d", &radius);
    printf("The value of area is %f", 3.14 * pow(radius, 2));

    return 0;
}