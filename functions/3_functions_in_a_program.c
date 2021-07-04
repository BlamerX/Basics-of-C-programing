#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main()
{
    goodmorning();
    goodafternoon();
    goodnight();
    return 0;
}

void goodmorning()
{
    printf("Good morning\n");
    // goodafternoon();
}

void goodafternoon()
{
    printf("Good Afternoon\n");
    //goodnight();
}

void goodnight()
{
    printf("Good Night\n");
}
