#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Adarsh.txt", "r"); //-->for reading the file
    // ptr = fopen("Adarsh.txt", "w"); //-->for writinging the file
    int num1;
    int num2;
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);
    printf("the value of num1 is %d\n", num1);
    printf("the value of num2 is %d\n", num2);

    return 0;
}