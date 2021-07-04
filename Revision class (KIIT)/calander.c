#include <stdio.h>
int main()
{
    // DISPLAY OF CALANDER OF FEBRUARY STARTING FROM TUESDAY
    printf("\t\t\t FEBRUARY\n");
    printf("S\tM\tT\tW\tT\tF\tS\n");
    printf(" \t \t");
    for (int i = 1; i <= 29; i++)
    {
        if (i == 5 || i == 12 || i == 19 || i == 26)
            printf("%d\n", i);
        else
            printf("%d\t", i);
    }
    return 0;
}