#include <stdio.h>

int dis1(int no)
{
    printf("x^%d\t", no);
}

int dis2(int no)
{
    printf("y^%d\t", no);
}
// Display of pattern x y^2 x^3 y^4 ....... upto n.
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        dis1(i);
        i++;
        dis2(i);
    }
}