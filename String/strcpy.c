#include <stdio.h>
#include <string.h>

int main()
{
    char st[200];
    gets(st);
    char st2[200];
    strcpy(st2, st);
    printf("Now the st2 is %s", st2);

    return 0;
}