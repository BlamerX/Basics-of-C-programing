#include <stdio.h>
int main()
{
    int a, b, d1, m1, y1, d2, m2, y2;
    printf("Enter the 1st date in (dd/mm/yyyy) below\n");
    scanf("%d", &a);
    printf("Enter the 2nd date in (dd/mm/yyyy) below\n");
    scanf("%d", &b);
    d1 = a / 1000000;
    m1 = (a / 10000) % 100;
    y1 = (a % 10000000) / 1000;
    d2 = b / 1000000;
    m2 = (b / 10000) % 100;
    y2 = (b % 10000000) / 1000;
    if (y1 > y2)
        printf("%d/%d/%d date is earlier than %d/%d/%d.", d1, m1, y1, d2, m2, y2);
    else if (y1 = y2 && m1 > m2)
    {
        printf("%d/%d/%d date is earlier than %d/%d/%d.", d1, m1, y1, d2, m2, y2);
        if (m1 = m2 && d1 > d2)
            printf("%d/%d/%d date is earlier than %d/%d/%d.", d1, m1, y1, d2, m2, y2);
    }
    else
        printf("%d/%d/%d date is earlier than %d/%d/%d.", d2, m2, y2, d1, m1, y1);

    // Difference between two dates in days
    int c, d, e;
    c = (y1 * 365) + (m1 * 30) + d1;
    d = (y2 * 365) + (m2 * 30) + d2;
    if (c > d)
        e = c - d;
    else
        e = d - c;
    printf("\nThe difference between two dates is: %d days", e);
}