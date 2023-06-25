#include <stdio.h>

void sum(int *i, int *j)
{
    printf("The sum of %d and %d is %d\n", *i, *j, *i + *j);
}
void avg(int *i, int *j)
{
    printf("The average of %d and %d is %d\n", *i, *j, (*i + *j)/2);
}

int main()
{
    int a = 5, b = 10;
    int *c = &a, *d = &b;

    sum(c, d);
    avg(c, d);

    return 0;
}