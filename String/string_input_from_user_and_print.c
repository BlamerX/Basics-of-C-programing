#include <stdio.h>
int main()
{
    char s[34];
    printf("Enter the string: ");
    scanf("%[^\n]s", s);
    printf("%s", s);
    return 0;
}