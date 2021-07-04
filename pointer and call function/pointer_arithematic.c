#include <stdio.h>
int main()
{
    int i = 34;
    int *ptr = &i;
    printf("The adress of ptr is %u\n", ptr);
    ptr++;
    printf("The adress of ptr is %u\n", ptr);

    char c = '3';
    char *ptr1 = &c;
    printf("The adress of ptr1 is %u\n", ptr1);
    ptr1++;
    printf("The adress of ptr1 is %u\n", ptr1);

    float f = 34;
    float *ptr2 = &f;
    printf("The adress of ptr2 is %u\n", ptr2);
    ptr2++;
    printf("The adress of ptr2 is %u\n", ptr2);

    return 0;
}