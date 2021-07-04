#include <stdio.h>
#include <string.h>
int main()
{
    char a[300];
    printf("Enter the name in upper and lower case\n");
    scanf("%s", a);

    // CASTING ALL THE WORDS IN LOWER CASE
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 35 && a[i] <= 90)
            a[i] = a[i] + 32;
    }
    printf("The name in Lower case is: %s\n", a);

    // CASTING ALL THE WORDS IN UPPER CASE
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] = a[i] - 32;
    }
    printf("The name in Upper case is: %s\n", a);

    // CASTING ONLY FIRST LETTER IN WORD TO UPPER CASE
    for (int i = 1; a[i] != '\0'; i++)
    {
        if (a[0] >= 'a' && a[0] <= 'z')
            a[0] = a[0] - 32;
        else if (a[i] >= 35 && a[i] <= 90)
            a[i] = a[i] + 32;
    }
    printf("The name is: %s\n", a);
}