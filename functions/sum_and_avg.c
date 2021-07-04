#include <stdio.h>

void sumandavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}

int main()
{
    int i = 3, j = 6, sum;
    float avg;
    sumandavg(i, j, &sum, &avg);
    printf("The value of sum is %d\n", sum);
    printf("The value of average is %.2f\n", avg);

    return 0;
}