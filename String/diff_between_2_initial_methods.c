#include <stdio.h>
int main()
{
    char *ptr = "Adarsh Bhai";
    ptr = "Roney Bhai";
    printf("%s", ptr);

    //  WRONG METHOD
    // char ptr[] = "Adarsh Bhai";
    //  ptr = "Roney Bhai";
    // printf("%s", ptr);

    return 0;
}