#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 4, b = 7;
    printf("The value of 4+7 is %d and %d\n", a, b);
    printf("The value of 4+7 is %d\n", sum(a, b));
    printf("The value of a and b after function call is %d and %d\n", sum(a, b));
    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    b = 3434;  // no difference it takes the original value a=4
    a = 23432; // no difference it takes the original value b=7
    return c;
}