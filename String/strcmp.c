#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "ABC";
    char b[] = "AB";
    printf("%d", strcmp(a, b));
    return 0;
}