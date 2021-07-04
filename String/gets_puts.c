#include <stdio.h>
int main()
{
    char s[34];
    printf("Enter your name: ");
    gets(s); // Same as scanf
    puts(s); // Same as Printf
    // printf("Your name is %s", s);

    return 0;
}