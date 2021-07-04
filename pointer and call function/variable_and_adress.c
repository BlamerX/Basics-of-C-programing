#include <stdio.h>
void printadd(int a)
{
    printf("The address of variable a is %u\n", &a);
}

int main()
{
    int i = 4;
    printf("The value of variable i is %d\n", i);
    printadd(i);
    printf("The adress of variable i is %d\n", &i);
    return 0;
}