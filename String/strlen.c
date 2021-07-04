#include <stdio.h>
#include <string.h>

int main()
{
    char st[200];
    gets(st);
    int a = strlen(st);
    printf("The length of the string is: %d", a);

    return 0;
}