#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("getcdemo.txt", "r");
    char c = fgetc(ptr); // 'c' Takes the first letter
    while (c != EOF)     // EOF == end of file
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);

    return 0;
}