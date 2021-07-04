#include <stdio.h>
void display(); // function prototype
int main()      // main area
{
    int a;
    printf("Initializing display function\n");
    display(); // function call
    printf("Display function finished it's work\n");
    return 0;
}

void display() // displa function area
{
    printf("This is display\n");
}