#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("generated.txt", "w");
    int number = 45;
    fprintf(fptr, "The number is %d\n", number);
    fprintf(fptr, "writting is done\n");
    fclose(fptr);

    return 0;
}