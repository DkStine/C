#include <stdio.h>

void address_return(int a)
{
    int *k = &a;

    printf("After getting into function, address: %u\n", k);
}


int main()
{
    int i = 30, *j = &i;
    
    printf("Before getting into function, address: %u\n", j);
    address_return(i);

    return 0;
}