#include <stdio.h>

struct vector
{
    int x, y;
};

struct vector sumvector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
};

int main()
{
    struct vector v1, v2, sum;
    v1.x = 34;
    v1.y = 54;
    printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);

    v2.x = 3345;
    v2.y = 534;
    printf("X dim is %d and Y dim is %d\n", v2.x, v2.y);

    sum = sumvector(v1, v2);
    printf("X dim result is %d and Y dim result is %d", sum.x, sum.y);
    return 0;
}
