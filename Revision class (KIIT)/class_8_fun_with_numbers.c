#include <stdio.h>
int main()
{
    // DISPLAY OF NUMBERS FROM 0 TO N
    /*int a;
    printf("Enter the last number: ");
    scanf("%d", &a);

    for (int i = 0; i <= a; i++)
    {
        printf("%d ", i);
    }

    printf("\n\n");
    */
    // DISPLAYOF NUMBER FORM M TO N
    int x, y;
    printf("Enter the starting point: ");
    scanf("%d", &x);
    printf("Enter the Ending point: ");
    scanf("%d", &y);

    printf("The forward display is: ");
    for (int i = x; i <= y; i++)
    {
        printf("%d ", i);
    }

    printf("\nThe reverse display is: ");
    for (int i = y; i >= x; i--)
    {
        printf("%d ", i);
    }

    return 0;
}