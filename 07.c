#include <stdio.h>

int main()
{
    int i = 7, *j = &i, **k = &j;

    printf("The value of the variable i is %d \n", *(*k));

    return 0;
}