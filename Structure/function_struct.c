#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp)
{
    printf("The code of employee is: %d\n", emp.code);
    printf("The salary of employee is: %f\n", emp.salary);
    printf("The name of employee is: %s\n", emp.name);
}

int main()
{
    struct employee e1, *ptr;
    ptr = &e1;
    // (*ptr).code = 101;
    // OR
    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "Harry");
    //printf("%d", e1.code);
    e1.code = 102;
    e1.salary = 12.02;
    strcpy(e1.name, "Adarsh");

    show(e1);
    return 0;
}
