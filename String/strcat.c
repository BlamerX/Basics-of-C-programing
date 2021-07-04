#include <stdio.h>
#include <string.h>
int main()
{
    char st1[200];
    gets(st1);
    char st2[200];
    gets(st2);
    strcat(st1, st2);
    printf("Now the st2 is %s", st1);

    return 0;
}