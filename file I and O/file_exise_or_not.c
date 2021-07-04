#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Adars3h.txt", "r"); // If part runs.
    // if my file name is Adarsh.txt then the else part runs.
    int num1;
    int num2;
    if (ptr == NULL)
    {
        printf("This file does no exist\n");
    }
    else
    {
        fscanf(ptr, "%d", &num1);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);
        printf("the value of num1 is %d\n", num1);
        printf("the value of num2 is %d\n", num2);
    }

    return 0;
}