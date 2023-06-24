#include <stdio.h>

int main()
{
    int a = 20, *d = &a;

    printf("The address of the variable a is %u\n", d);
    printf("The value of the variable a is %d\n", *d);
    
    return 0;
}