#include <stdio.h>
int main()
{
    char *new = "ADARSH";
    printf("%s", new);

    printf("\n");

    // ANOTHER WAY
    char str[] = "ADARSH"; // char str[] = {'A', 'D', 'A', 'R', 'S', 'H', '\0'};
    char *ptr = &str[0];
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}